# Nombre del proyecto
Página Web "Calculadora de Huella Ecológica" - Estimador de Impacto Ambiental y Análisis de Ciclo de Vida con Make.com e IA

## Descripción
En esta práctica de la materia Desarrollo Sustentable (Unidad 4: Escenario Económico), se diseñó e implementó una aplicación web interactiva alojada en GitHub Pages y conectada mediante Webhooks a un escenario automatizado en Make.com. La herramienta recopila los hábitos cotidianos de cada usuario mediante un cuestionario estructurado de 10 indicadores distribuidos en cinco categorías clave: alimentación (consumo de carne y productos locales), transporte (medio principal, kilómetros diarios y vuelos anuales), energía (uso diario de aire acondicionado y habitantes por vivienda), consumo (adquisición de ropa y renovación de teléfono celular) y manejo de residuos. A partir de estos datos, un Agente de Inteligencia Artificial (`Make AI Agent`) contextualizado en las condiciones climáticas de Mazatlán, Sinaloa, estima la huella ecológica anual en hectáreas globales y la cantidad de planetas Tierra necesarios si toda la población mantuviera ese estilo de vida, desglosando el impacto por área, proponiendo tres acciones prioritarias de reducción y señalando oportunidades económicas sustentables en la región.

## Objetivos de aprendizaje
* Comprender los conceptos de huella ecológica, biocapacidad y hectárea global, relacionando los hábitos individuales de consumo con las estrategias de sustentabilidad para el escenario económico.
* Construir una interfaz web responsiva en un solo archivo con validación de campos y envío de datos mediante peticiones asíncronas `fetch` POST con `URLSearchParams`.
* Configurar un flujo de integración en Make.com compuesto por `Custom Webhooks`, `Make AI Agent` y `Webhook Response` con encabezados CORS (`Access-Control-Allow-Origin: *` y `Content-Type: text/plain; charset=utf-8`).
* Parametrizar las instrucciones de un Agente de IA (`Make's AI Provider`) considerando el contexto climático regional de Mazatlán y el alto uso de climatización para generar estimaciones estructuradas en texto plano.
* Evaluar la precisión y los alcances de las estimaciones generadas por inteligencia artificial contrastando los resultados con la calculadora oficial de Global Footprint Network y los promedios nacional y mundial.

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Custom Webhooks, Make AI Agent, Webhook Response)
* **Motor de Inteligencia Artificial:** Make's AI Provider (`Make AI Agent`)
* **Lenguajes y Tecnologías Web:** HTML5, CSS3 y JavaScript (API Fetch y `URLSearchParams`)
* **Servicio de Hosting:** GitHub Pages
* **Herramienta de Referencia Oficial:** Calculadora de Huella Ecológica de Global Footprint Network (`footprintcalculator.org`)
* **IA Generativa de Apoyo:** Asistente para la maquetación inicial de la interfaz web

## Código
[main.txt](Codigo/main.txt)

## Diagrama de Make / Imágenes del funcionamiento
<img width="500" height="500" alt="Screenshot 2026-11-13 08 38 58" src="https://github.com/user-attachments/assets/723c6f1f-3f8e-4a1f-a2f2-d9b321bce60e" />
<img width="500" height="500" alt="Screenshot 2026-11-13 08 34 56" src="https://github.com/user-attachments/assets/a9d736bd-96fd-4903-975d-b2755ffb18d0" />

## Resultados
[Aqui va el pdf](https://github.com/Eric-ai17/Universidad-Itmaz-/blob/main/Practicas/Calculadora%20huella%20ecologicai/Resultados/Reporte%20de%20Resultados%20-%20Calculadora%20de%20Huella%20Ecologica.pdf)

## Video del funcionamiento

[Ver video en YouTube](https://youtu.be/kefZe99JnFA)
