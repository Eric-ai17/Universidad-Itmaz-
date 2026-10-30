# Nombre del proyecto
Página Web "Noticias Climáticas del Día" - Agregador y Resumidor de Noticias Ambientales con RSS, Make.com e IA

## Descripción
En esta práctica de la materia Desarrollo Sustentable, se diseñó e implementó una herramienta web de difusión ambiental alojada en GitHub Pages y conectada a un flujo de automatización en Make.com[ La aplicación permite a los usuarios seleccionar entre 6 temas ambientales estratégicos (desde problemáticas globales como el cambio climático hasta temas regionales como la sequía o manglares en Sinaloa y Mazatlán) Al realizar la consulta, el sistema extrae en tiempo real las noticias más recientes del feed RSS de Google News, agrupa las entradas mediante un agregador de texto y procesa los titulares mediante un Agente de IA (`Make AI Agent`) La IA sintetiza la información generando un resumen ejecutivo del día, un listado estructurado con enlaces clicables a las fuentes originales y una recomendación ciudadana concreta, devolviendo el resultado en texto plano formateado a la página web[cite: 20, 22, 23, 24].

## Objetivos de aprendizaje
* Implementar herramientas No-Code de transferencia de información para impulsar la concientización ambiental en la comunidad[cite: 20, 21].
* Configurar la lectura e integración dinámica de canales de noticias RSS (`Retrieve RSS feed items`) alimentados por Google News con codificación URL de parámetros (`encodeURL`)
* Optimizar el consumo de créditos de IA en Make.com mediante el módulo agregador de texto (`Text aggregator`) para condensar múltiples fuentes en una sola petición.
* Diseñar un *System Prompt* en un Agente de IA (`Make AI Agent`) especializado en divulgación sustentable para sintetizar noticias sin alucinaciones y con llamadas a la acción.
* Desplegar una interfaz web responsiva en GitHub Pages conectada a `Custom Webhooks` en Make.com con solicitudes asíncronas (`fetch` POST `URLSearchParams`) y cabeceras CORS (`Access-Control-Allow-Origin: *`)

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Webhooks, RSS Module, Text Aggregator, Make AI Agent, Webhook Response)
* **Fuente de Información en Tiempo Real:** Feed RSS de Google News (Búsquedas temáticas nacionales y regionales)
* **Motor de Inteligencia Artificial:** Make's AI Provider (`Make AI Agent`)
* **Lenguajes y Tecnologías Web:** HTML5, CSS3 y JavaScript (API Fetch y `URLSearchParams`)
* **Servicio de Hosting:** GitHub Pages
* **IA Generativa de Apoyo:** Asistente para la maquetación del código web

## Código
[main.txt](Codigo/main.txt)

## Diagrama de Make / Imágenes del funcionamiento
[Diagrama del flujo en Make.com e interfaz de la página web con selector de noticias ambientales]
<img width="500" height="300" alt="WhatsApp Image 2026-10-30 at 12 33 20" src="https://github.com/user-attachments/assets/56f81e08-0ea9-4dbc-86ab-1ba2239712ee" /><img width="500" height="500" alt="Energía renovable en México" src="https://github.com/user-attachments/assets/47ef23e7-b656-49d4-94e3-e106bc594bb9" />


## Resultados
[Aqui va el pdf](https://github.com/Eric-ai17/Universidad-Itmaz-/blob/main/Practicas/Noticiasclimaticasdeldia/Resultados/Noticiasclimaticasdeldia.pdf)
## Video del funcionamiento
[Ver video en YouTube](https://youtu.be/tFbSimoZHMQ)
