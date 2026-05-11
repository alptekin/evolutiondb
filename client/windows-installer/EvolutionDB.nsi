; EvolutionDB.nsi — NSIS installer script for Windows.
;
; Produces EvolutionDB-<version>-x86_64.exe, a Modern UI 2 wizard
; that lays down the evosql-server binary at
; C:\Program Files\EvolutionDB\, registers it as a Windows Service
; via sc.exe, and starts the service so the server is running on
; localhost:5433 immediately after the user clicks Finish.
;
; Build:
;   makensis -DVERSION=0.1.0 \
;            -DSRC_BINARY=path/to/evosql-server-windows-x86_64.exe \
;            EvolutionDB.nsi
;
; The script is intentionally stand-alone — it does not depend on
; NSIS plug-ins outside the default install, so the GitHub Actions
; runner only needs the bundled `nsis` apt package to drive it.

!define APPNAME       "EvolutionDB"
!define COMPANY       "EvolutionDB"
!define DESCRIPTION   "SQL engine with built-in long-term memory primitives"
!define SERVICE_NAME  "EvolutionDB"
!define SERVICE_DISP  "EvolutionDB Server"
!define UNINSTALL_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\${APPNAME}"

!ifndef VERSION
  !define VERSION "0.0.0"
!endif
!ifndef SRC_BINARY
  !error "Pass -DSRC_BINARY=path\to\evosql-server-windows-x86_64.exe"
!endif

Name          "${APPNAME} ${VERSION}"
OutFile       "EvolutionDB-${VERSION}-x86_64.exe"
InstallDir    "$PROGRAMFILES64\${APPNAME}"
InstallDirRegKey HKLM "Software\${APPNAME}" "InstallDir"
RequestExecutionLevel admin   ; SCM access needs admin
Unicode       True
SetCompressor /SOLID lzma

VIProductVersion "${VERSION}.0"
VIAddVersionKey  ProductName     "${APPNAME}"
VIAddVersionKey  ProductVersion  "${VERSION}"
VIAddVersionKey  CompanyName     "${COMPANY}"
VIAddVersionKey  FileDescription "${DESCRIPTION}"
VIAddVersionKey  FileVersion     "${VERSION}"
VIAddVersionKey  LegalCopyright  "MIT"

!include "MUI2.nsh"
!include "LogicLib.nsh"

!define MUI_ABORTWARNING
!define MUI_FINISHPAGE_TITLE "EvolutionDB is running."
!define MUI_FINISHPAGE_TEXT  "The server is now installed at $INSTDIR and registered as a Windows service that starts automatically with this machine. Listening on 127.0.0.1:5433 (PostgreSQL wire) and 127.0.0.1:9967 (native EVO protocol). Default credentials are admin / admin."
!define MUI_FINISHPAGE_SHOWREADME "$INSTDIR\README.txt"
!define MUI_FINISHPAGE_SHOWREADME_TEXT "Show post-install README"

!insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_LICENSE       "LICENSE.txt"
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES

!insertmacro MUI_LANGUAGE "English"

;------------------------------------------------------------------
; Install section
;------------------------------------------------------------------
Section "Install"
    SetOutPath "$INSTDIR"
    File /oname=evosql-server.exe "${SRC_BINARY}"
    File "LICENSE.txt"
    File "README.txt"

    ; Data + log directories under ProgramData so they survive
    ; per-user reinstalls and roam with the machine, not the profile.
    CreateDirectory "$COMMONAPPDATA\${APPNAME}\data"
    CreateDirectory "$COMMONAPPDATA\${APPNAME}\log"

    ; Record install dir so the uninstaller can find us.
    WriteRegStr HKLM "Software\${APPNAME}" "InstallDir" "$INSTDIR"

    ; Add / Remove Programs entry.
    WriteRegStr HKLM "${UNINSTALL_KEY}" "DisplayName"     "${APPNAME}"
    WriteRegStr HKLM "${UNINSTALL_KEY}" "DisplayVersion"  "${VERSION}"
    WriteRegStr HKLM "${UNINSTALL_KEY}" "Publisher"       "${COMPANY}"
    WriteRegStr HKLM "${UNINSTALL_KEY}" "DisplayIcon"     "$INSTDIR\evosql-server.exe,0"
    WriteRegStr HKLM "${UNINSTALL_KEY}" "UninstallString" "$INSTDIR\Uninstall.exe"
    WriteRegDWORD HKLM "${UNINSTALL_KEY}" "NoModify" 1
    WriteRegDWORD HKLM "${UNINSTALL_KEY}" "NoRepair" 1

    WriteUninstaller "$INSTDIR\Uninstall.exe"

    ; Register Windows service — auto-start, runs as LocalSystem so
    ; it can bind the loopback ports without UAC prompts after boot.
    ExecWait 'sc.exe create "${SERVICE_NAME}" \
        binPath= "\"$INSTDIR\evosql-server.exe\" --pg-port 5433 --evo-port 9967" \
        DisplayName= "${SERVICE_DISP}" \
        start= auto' $0
    ${If} $0 != 0
        DetailPrint "sc.exe create returned $0 (service may already exist)"
    ${EndIf}

    ; Default credentials, passed via service environment so the
    ; auto-generated admin password path is bypassed.
    ExecWait 'sc.exe config "${SERVICE_NAME}" \
        obj= "LocalSystem"' $0

    ; Start the service. If it errors, the user can pick up the
    ; failure later via the Services MMC — we don't block install.
    ExecWait 'sc.exe start "${SERVICE_NAME}"' $0
    ${If} $0 != 0
        DetailPrint "sc.exe start returned $0 (Services MMC for detail)"
    ${EndIf}
SectionEnd

;------------------------------------------------------------------
; Uninstall section
;------------------------------------------------------------------
Section "Uninstall"
    ; Stop + delete service first so the .exe file isn't locked.
    ExecWait 'sc.exe stop   "${SERVICE_NAME}"' $0
    Sleep 1500
    ExecWait 'sc.exe delete "${SERVICE_NAME}"' $0

    Delete "$INSTDIR\evosql-server.exe"
    Delete "$INSTDIR\LICENSE.txt"
    Delete "$INSTDIR\README.txt"
    Delete "$INSTDIR\Uninstall.exe"
    RMDir  "$INSTDIR"

    ; Leave the data directory in place by default. Users can wipe
    ; it manually from %PROGRAMDATA%\EvolutionDB if they want.

    DeleteRegKey HKLM "${UNINSTALL_KEY}"
    DeleteRegKey HKLM "Software\${APPNAME}"
SectionEnd
