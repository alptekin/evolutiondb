#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=gfortran.exe
AS=as.exe

# Macros
CND_PLATFORM=Cygwin-Windows
CND_CONF=Debug
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/evoparser.tab.o \
	${OBJECTDIR}/Delete.o \
	${OBJECTDIR}/db.o \
	${OBJECTDIR}/Update.o \
	${OBJECTDIR}/daemon_err.o \
	${OBJECTDIR}/lex.yy.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/error.o \
	${OBJECTDIR}/Select.o \
	${OBJECTDIR}/Create.o \
	${OBJECTDIR}/insert.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Debug.mk dist/Debug/Cygwin-Windows/deneme.exe

dist/Debug/Cygwin-Windows/deneme.exe: ${OBJECTFILES}
	${MKDIR} -p dist/Debug/Cygwin-Windows
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/deneme ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/evoparser.tab.o: nbproject/Makefile-${CND_CONF}.mk evoparser.tab.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/evoparser.tab.o evoparser.tab.c

${OBJECTDIR}/Delete.o: nbproject/Makefile-${CND_CONF}.mk Delete.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Delete.o Delete.c

${OBJECTDIR}/db.o: nbproject/Makefile-${CND_CONF}.mk db.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/db.o db.c

${OBJECTDIR}/Update.o: nbproject/Makefile-${CND_CONF}.mk Update.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Update.o Update.c

${OBJECTDIR}/daemon_err.o: nbproject/Makefile-${CND_CONF}.mk daemon_err.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/daemon_err.o daemon_err.c

${OBJECTDIR}/lex.yy.o: nbproject/Makefile-${CND_CONF}.mk lex.yy.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/lex.yy.o lex.yy.c

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/error.o: nbproject/Makefile-${CND_CONF}.mk error.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/error.o error.c

${OBJECTDIR}/Select.o: nbproject/Makefile-${CND_CONF}.mk Select.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Select.o Select.c

${OBJECTDIR}/Create.o: nbproject/Makefile-${CND_CONF}.mk Create.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Create.o Create.c

${OBJECTDIR}/insert.o: nbproject/Makefile-${CND_CONF}.mk insert.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/insert.o insert.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf:
	${RM} -r build/Debug
	${RM} dist/Debug/Cygwin-Windows/deneme.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
