# Nombre del proyecto
Buzón Ciudadano Ambiental con Folio Automatizado mediante Telegram, Make.com y Google Sheets

## Descripción
En esta práctica de la materia Desarrollo Sustentable, se diseñó e implementó un sistema de participación ciudadana automatizado utilizando Telegram, Make.com y Google Sheets. El sistema actúa como una ventanilla digital de atención ambiental que recibe reportes de la comunidad en tiempo real, genera automáticamente un código de folio único con formato de fecha y hora local (`AMB-YYMMDD-HHmmss`), registra la denuncia de manera estructurada en una base de datos en Google Sheets y devuelve una respuesta de confirmación al ciudadano para que pueda dar seguimiento formal a su solicitud

## Objetivos de aprendizaje
* Configurar un receptor de mensajes en tiempo real (`Watch Updates` / Webhook) mediante la API de Telegram Bot API en Make.com.
* Crear variables dinámicas con la función `Set variable` en Make.com para la asignación de folios únicos estandarizados con zona horaria de Mazatlán.
* Integrar y mapear datos dinámicos (folio, fecha, usuario, nombre, reporte, estatus) hacia Google Sheets mediante el módulo `Add a Row`.
* Implementar enrutadores (`Router`) y filtros condicionales para discriminar comandos de control (como `/start`) del registro directo de reportes
* Analizar el valor de la participación ciudadana formal, la transparencia institucional y la importancia del uso de folios en la gestión ambiental

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Zona horaria `America/Mazatlan`)
* **Bot de Mensajería:** Telegram Bot API (creado mediante `@BotFather`)
* **Base de Datos / Registro:** Google Sheets (Hoja `Buzon_Ciudadano_Equipo#`)
* **Módulos de Make:** `Watch Updates`, `Set Variable`, `Google Sheets (Add a Row)`, `Router` y `Send a Text Message`
* **Dispositivo de Interacción:** Cliente móvil o web de Telegram

## Código
[main.txt](Codigo/main.txt)

## Diagrama del circuito / Imágenes del funcionamiento
[Diagrama del flujo en Make.com, hoja de Google Sheets y chat de Telegram]<img width="500" height="300" alt="WhatsApp Image 2026-10-26 at 13 52 30" src="https://github.com/user-attachments/assets/a66e8a2a-d1aa-4f48-b970-7b1f8ce6094b" /> <img width="500" height="300" alt="WhatsApp Image 2026-10-26 at 13 50 14" src="https://github.com/user-attachments/assets/b370758f-8f0f-4652-8e19-64fdb630d7fa" /> <img width="500" height="300" alt="WhatsApp Image 2026-10-26 at 13 49 51" src="https://github.com/user-attachments/assets/c4038d50-5dcd-4ecd-aa92-9dde7cdf5506" />




## Resultados
[Aqui va el pdf](https://github.com/Eric-ai17/Universidad-Itmaz-/blob/main/Practicas/%20Buzonciudadano/resultados/Reporte%20de%20Resultados%20-%20Buz%C3%B3n%20Ciudadano.pdf)

## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/wOp2i742wS8?feature=share)
