# GreenIT - El precio invisible de la nube

Breve descripción del proyecto

## Descripción
Página web interactiva y sistema de automatización enfocado en la concientización sobre el impacto ambiental del almacenamiento en la nube (consumo de energía, refrigeración por agua y huella de carbono de los centros de datos). El sistema recopila las opiniones de los usuarios a través de un formulario web, procesa las respuestas en tiempo real mediante Make, las almacena automáticamente en Google Sheets y envía un correo de agradecimiento.

## Objetivos de aprendizaje
* Diseñar e implementar una interfaz web asistida por IA generativa (Claude) orientada a la sostenibilidad.
* Configurar un flujo de automatización en Make (Integromat) utilizando Webhooks.
* Almacenar registros estructurados en Google Sheets e integrar notificaciones por correo electrónico (Gmail API) sin servidor backend.

## Material utilizado
Enumera todos los componentes usados:
* Claude AI (IA Generativa para maquetación web)
* HTML5 / CSS3 / JavaScript (Fetch API)
* Make (Integromat - Webhook, Google Sheets, Gmail API)
* Google Sheets
* Gmail API

## Diagrama del circuito
![Flujo de automatización en Make]<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/92235d08-7d6b-41f3-8918-0e127eca5ea2"/>
<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/91e5fff0-86b0-4556-aab4-4cfca55ba09c" />



## Código


## Reporte Técnico
  
 **1. Resumen Ejecutivo**  
 El presente reporte documenta el desarrollo e implementación...
 ## Reporte Técnico

### 1. Resumen Ejecutivo
El presente reporte documenta el desarrollo e implementación de una plataforma web interactiva y un flujo de automatización *serverless* orientado a concientizar sobre el impacto ambiental del almacenamiento en la nube. La solución integra tecnologías web cliente con arquitecturas de automatización basadas en eventos (Webhooks, Make, Google Sheets y Gmail API), reduciendo la huella de carbono al eliminar la necesidad de un servidor backend dedicado de escucha continua.

### 2. Planteamiento del Problema
A pesar de la percepción de "la nube" como una entidad inmaterial, la infraestructura digital mundial descansa sobre centros de datos físicos que operan ininterrumpidamente (24/7/365). Estos centros representan entre el 1% y el 1.5% del consumo eléctrico global y requieren millones de litros de agua para sus sistemas de refrigeración, además de generar toneladas de residuos electrónicos por el reemplazo constante de hardware cada 3 a 5 años.

### 3. Arquitectura del Sistema
La solución se compone de tres capas integradas:

* **Frontend (Interfaz de Usuario):** Desarrollado con HTML5, CSS3 y JavaScript asíncrono. Incorpora secciones de concientización visual, un área de reflexión local (sin almacenamiento) y un formulario interactivo.
* **Middleware (Orquestador de Procesos):** Implementado en Make mediante un *Custom Webhook*. Recibe la carga útil en formato JSON desde el cliente HTTP sin requerir servidores intermedios encendidos permanentemente.
* **Servicios Finales (Persistencia y Notificación):** 
  * **Google Sheets:** Almacena de manera estructurada los registros (fecha, nombre, correo y opinión).
  * **Gmail API:** Despacha una notificación automática de confirmación al usuario.

### 4. Flujo de Datos
1. El usuario completa los campos (`nombre`, `correo`, `opinion`) en la página web.
2. La API `fetch()` de JavaScript transmite los datos formateados en JSON mediante una petición `POST` hacia la dirección del Webhook.
3. El escenario de Make captura el evento y ejecuta en secuencia:
   * Módulo `Google Sheets: Add a Row` para insertar la fila con los datos recibidos.
   * Módulo `Gmail: Send an Email` enviando un correo de confirmación al destinatario.
4. El navegador actualiza la interfaz mostrando una confirmación visual de recepción.

### 5. Evaluación de Impacto (Green IT)
La implementación de una arquitectura basada en eventos (*Event-Driven Architecture*) optimiza el consumo de recursos computacionales. Al delegar el procesamiento a servicios multi-inquilino en la nube (*serverless*) en lugar de mantener un servidor dedicado encendido las 24 horas para recibir solicitudes de formulario, se reduce significativamente el desperdicio de energía eléctrica y la huella de carbono asociada.

### 6. Conclusiones
Se logró desplegar con éxito una solución eficiente que combina la concientización ambiental con el uso responsable de tecnologías digitales. El proyecto demuestra que la adopción de arquitecturas modernas no solo agiliza el desarrollo, sino que respalda los principios de sostenibilidad y optimización de recursos promovidos por Green IT.

