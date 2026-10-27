# Nombre del proyecto
Buzón Ciudadano Ambiental con Folio Automatizado mediante Telegram, Make.com y Google Sheets

## Descripción
En esta práctica de la materia Desarrollo Sustentable, se diseñó e implementó un sistema de participación ciudadana automatizado utilizando Telegram, Make.com y Google Sheets[cite: 11, 12]. El sistema actúa como una ventanilla digital de atención ambiental que recibe reportes de la comunidad en tiempo real, genera automáticamente un código de folio único con formato de fecha y hora local (`AMB-YYMMDD-HHmmss`), registra la denuncia de manera estructurada en una base de datos en Google Sheets y devuelve una respuesta de confirmación al ciudadano para que pueda dar seguimiento formal a su solicitud[cite: 11, 12, 13].

## Objetivos de aprendizaje
* Configurar un receptor de mensajes en tiempo real (`Watch Updates` / Webhook) mediante la API de Telegram Bot API en Make.com[cite: 12, 13].
* Crear variables dinámicas con la función `Set variable` en Make.com para la asignación de folios únicos estandarizados con zona horaria de Mazatlán[cite: 13].
* Integrar y mapear datos dinámicos (folio, fecha, usuario, nombre, reporte, estatus) hacia Google Sheets mediante el módulo `Add a Row`[cite: 13].
* Implementar enrutadores (`Router`) y filtros condicionales para discriminar comandos de control (como `/start`) del registro directo de reportes[cite: 13, 14].
* Analizar el valor de la participación ciudadana formal, la transparencia institucional y la importancia del uso de folios en la gestión ambiental[cite: 11, 12].

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Zona horaria `America/Mazatlan`)[cite: 11, 13]
* **Bot de Mensajería:** Telegram Bot API (creado mediante `@BotFather`)[cite: 11, 12]
* **Base de Datos / Registro:** Google Sheets (Hoja `Buzon_Ciudadano_Equipo#`)[cite: 11, 12]
* **Módulos de Make:** `Watch Updates`, `Set Variable`, `Google Sheets (Add a Row)`, `Router` y `Send a Text Message`[cite: 12, 13, 14]
* **Dispositivo de Interacción:** Cliente móvil o web de Telegram[cite: 12]

## Código
[main.txt](Codigo/main.txt)

## Diagrama del circuito / Imágenes del funcionamiento
[Diagrama del flujo en Make.com, hoja de Google Sheets y chat de Telegram]<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/tu-imagen-aqui-1" />
<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/tu-imagen-aqui-2" />

## Resultados
Durante el desarrollo y pruebas de campo del proyecto se obtuvieron los siguientes resultados:

* **Generación Automática de Folio:** Cada reporte enviado por los usuarios generó de forma instantánea un folio único e irrepetible con la nomenclatura `AMB-YYMMDD-HHmmss`, garantizando el registro formal[cite: 11, 13].
* **Almacenamiento Centralizado en Google Sheets:** Se verificó la correcta captura en tiempo real de la fecha, nombre de usuario, contenido de la denuncia y estado asignado ("Recibido") dentro de la hoja de cálculo[cite: 12, 13].
* **Control de Comandos y Flujo Interactivo:** La inclusión del enrutador y filtro permitió enviar instrucciones de uso al recibir el comando `/start`, evitando el almacenamiento de mensajes no válidos en la base de datos[cite: 13, 14].

## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/wOp2i742wS8?feature=share)
