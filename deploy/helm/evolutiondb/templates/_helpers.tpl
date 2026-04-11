{{/*
Expand the name of the chart.
*/}}
{{- define "evolutiondb.name" -}}
{{- default .Chart.Name .Values.nameOverride | trunc 63 | trimSuffix "-" }}
{{- end }}

{{/*
Create a default fully qualified app name.
*/}}
{{- define "evolutiondb.fullname" -}}
{{- if .Values.fullnameOverride }}
{{- .Values.fullnameOverride | trunc 63 | trimSuffix "-" }}
{{- else }}
{{- $name := default .Chart.Name .Values.nameOverride }}
{{- if contains $name .Release.Name }}
{{- .Release.Name | trunc 63 | trimSuffix "-" }}
{{- else }}
{{- printf "%s-%s" .Release.Name $name | trunc 63 | trimSuffix "-" }}
{{- end }}
{{- end }}
{{- end }}

{{/*
Common labels
*/}}
{{- define "evolutiondb.labels" -}}
helm.sh/chart: {{ printf "%s-%s" .Chart.Name .Chart.Version | replace "+" "_" | trunc 63 | trimSuffix "-" }}
{{ include "evolutiondb.selectorLabels" . }}
app.kubernetes.io/version: {{ .Values.image.tag | default .Chart.AppVersion | quote }}
app.kubernetes.io/managed-by: {{ .Release.Service }}
{{- end }}

{{/*
Selector labels
*/}}
{{- define "evolutiondb.selectorLabels" -}}
app.kubernetes.io/name: {{ include "evolutiondb.name" . }}
app.kubernetes.io/instance: {{ .Release.Name }}
{{- end }}

{{/*
Secret name for auth credentials
*/}}
{{- define "evolutiondb.secretName" -}}
{{- if .Values.auth.existingSecret }}
{{- .Values.auth.existingSecret }}
{{- else }}
{{- include "evolutiondb.fullname" . }}
{{- end }}
{{- end }}

{{/*
Secret name for encryption key
*/}}
{{- define "evolutiondb.encryptionSecretName" -}}
{{- if .Values.encryption.existingSecret }}
{{- .Values.encryption.existingSecret }}
{{- else }}
{{- printf "%s-encryption" (include "evolutiondb.fullname" .) }}
{{- end }}
{{- end }}
