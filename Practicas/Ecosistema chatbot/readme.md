# Nombre del proyecto
Identificación de Organismos del Ecosistema mediante Bot de Telegram y Agente de IA en Make.com

## Descripción
En esta práctica de la materia Desarrollo Sustentable con Automatización, se diseñó e implementó un flujo de automatización en Make.com conectado a un bot de Telegram y un Agente de Inteligencia Artificial con visión (`Make AI Agent`). El sistema recibe fotografías capturadas por los estudiantes en el jardín del Tecnológico, analiza el ser vivo de la imagen y responde automáticamente en pocos segundos clasificando su rol trófico (productor, consumidor o descomponedor) e identificando su función dentro del ecosistema.

## Objetivos de aprendizaje
* Configurar un disparador en tiempo real (`Watch Updates` / Webhook) utilizando la API de Telegram Bot en Make.com.
* Implementar un enrutador (`Router`) con filtros condicionales para diferenciar mensajes con fotografía de mensajes de texto simple.
* Integrar un Agente de Inteligencia Artificial con capacidad de visión para el análisis y clasificación biológica de imágenes.
* Estructurar un System Prompt estricto que limite las respuestas a un formato específico en español de máximo 35 palabras.
* Documentar las evidencias de prueba y reflexionar sobre el impacto de la automatización en el estudio del desarrollo sustentable.

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Zona `us2.make.com`)
* **Bot de Mensajería:** Telegram Bot API (creado con `@BotFather`)
* **Agente de IA:** Make AI Agent (Modelo de visión `gpt-5-nano` / `medium`)
* **Dispositivo de Captura:** Teléfono inteligente con cámara
* **Entorno de Campo:** Jardín del Instituto Tecnológico de Mazatlán

## Diagrama del circuito / Arquitectura del Flujo
[Diagrama del flujo en Make.com]<<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/fd89b8d8-1a3b-46a1-8f07-919e56ad69d5" />
>

## Video del funcionamiento
[[Ver video en YouTube](https://youtu.be/Ddfz1HOkf38)](https://youtube.com/shorts/8USO-tsQnlE)
---

## Código

### 1. Archivo `blueprint.json`
El código JSON exportado de la automatización se encuentra guardado en la raíz del repositorio:
👉 [`Integration Telegram Bot.blueprint.json`]("Integration Telegram Bot.blueprint.json")

### 2. System Prompt configurado en el Agente de IA
```text
Eres un asistente educativo que identifica organismos en fotos tomadas por estudiantes en el jardín del Tecnológico, para la materia de Desarrollo Sustentable, tema "El Ecosistema".

Cuando recibas una imagen, responde SIEMPRE en este formato, sin texto adicional antes o después:
🔎 [nombre probable del organismo]
🌱 [Productor / Consumidor / Descomponedor]
♻️ [rol en el ecosistema en máximo 15 palabras]

Si la imagen no muestra un organismo vivo, responde únicamente:
"❌ No identifico un organismo. Intenta con una planta, insecto u otro ser vivo."

Reglas estrictas:
- Máximo 35 palabras en total.
- Sin introducciones, sin despedidas, sin explicaciones extra.
- Responde siempre en español.




