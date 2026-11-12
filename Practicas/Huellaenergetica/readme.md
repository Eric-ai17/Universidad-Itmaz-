# Nombre del proyecto
Página Web "Huella Energética de la Nube" - Estimador de Consumo Digital y Externalidades Ambientales con Make.com e IA

## Descripción
En esta práctica de la materia Desarrollo Sustentable (Unidad 4: Escenario Económico), se diseñó e implementó una página web interactiva alojada en GitHub Pages y conectada mediante Webhooks a un escenario automatizado en Make.com. La aplicación permite a cada usuario capturar su actividad digital semanal y diaria a través de 8 parámetros clave (streaming de video, streaming de música, redes sociales, videollamadas, videojuegos en línea, almacenamiento en la nube, consultas a chatbots de IA y envío de correos electrónicos). Los datos son enviados a un Agente de Inteligencia Artificial (`Make AI Agent`), el cual estima el consumo eléctrico semanal y anual en kWh, calcula las emisiones asociadas en kg de CO₂e utilizando el factor de emisión del Sistema Eléctrico Nacional de México, analiza el impacto como una externalidad ambiental absorbida por la sociedad y el entorno, y propone tres acciones concretas para reducir la huella digital.

## Objetivos de aprendizaje
* Reconocer el consumo energético e hídrico de los servicios digitales y centros de datos como una externalidad negativa dentro de los procesos económicos actuales.
* Construir una interfaz web responsiva en un solo archivo con validación de campos numéricos y envío de datos mediante peticiones asíncronas `fetch` POST con `URLSearchParams`.
* Configurar un escenario de automatización en Make.com integrando `Custom Webhooks`, `Make AI Agent` y `Webhook Response` con cabeceras CORS (`Access-Control-Allow-Origin: *` y `Content-Type: text/plain; charset=utf-8`).
* Parametrizar las instrucciones de un Agente de IA (`Make's AI Provider`) incorporando el factor de emisión oficial del Sistema Eléctrico Nacional de México para generar estimaciones transparentes en texto plano.
* Evaluar de manera crítica los supuestos energéticos empleados por la inteligencia artificial contrastándolos con fuentes de referencia documentadas.

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Custom Webhooks, Make AI Agent, Webhook Response)
* **Motor de Inteligencia Artificial:** Make's AI Provider (`Make AI Agent`)
* **Lenguajes y Tecnologías Web:** HTML5, CSS3 y JavaScript (API Fetch y `URLSearchParams`)
* **Servicio de Hosting:** GitHub Pages
* **Herramientas de Medición:** Bienestar Digital (Android) / Tiempo en Pantalla (iOS) para el registro real de uso semanal
* **IA Generativa de Apoyo:** Asistente para la maquetación inicial de la interfaz web

## Código
[main.txt](Codigo/main.txt)

## Diagrama de Make / Imágenes del funcionamiento
<img width="500" height="500" alt="Screenshot 2026-11-12 11 32 18" src="https://github.com/user-attachments/assets/0028cbf3-0b4e-4baa-983d-ebc33de2152f" />
<img width="500" height="500" alt="Screenshot 2026-11-12 11 31 50" src="https://github.com/user-attachments/assets/d8d1023a-6eba-4dbb-8919-020f94ebb2bf" />

## Resultados
[Aqui va el pdf]
## Video del funcionamiento
[Ver video en YouTube](https://youtu.be/P5QDQGTMxg4)
