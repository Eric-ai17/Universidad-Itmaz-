# Nombre del proyecto
Página Web Encuesta "¿Compras Local o Global?" - Analista de Patrones de Consumo y PIB con Make.com, Google Sheets e IA

## Descripción
En esta práctica de la materia Desarrollo Sustentable (Unidad 4: Escenario Económico), se diseñó e implementó una solución web de evaluación de impacto económico local alojada en GitHub Pages y conectada mediante Make.com a Google Sheets y a un Agente de Inteligencia Artificial (`Make AI Agent`). La aplicación permite capturar 20 encuestas anónimas sobre hábitos de compra (alimentos, vestimenta, plataformas internacionales, criterios de decisión, conciencia del origen del producto y rango de edad). Mediante una arquitectura con enrutador dinámico (`Flow Control Router`), el sistema almacena cada respuesta en tiempo real en una hoja de cálculo en Google Sheets (Ruta 1) y sintetiza el total de las respuestas recopiladas mediante un agregador de texto (`Text aggregator`) para procesarlas con la IA (Ruta 2), generando un reporte con porcentajes por categoría, análisis de impacto en el Producto Interno Bruto (PIB) regional de Mazatlán y recomendaciones de consumo sustentable.

## Objetivos de aprendizaje
* Relacionar los hábitos de consumo individual y colectivo con la economía local, la generación de empleo regional y el Producto Interno Bruto (PIB) en Mazatlán, Sinaloa.
* Configurar una arquitectura de automatización No-Code en Make.com basada en `Custom Webhooks` y un enrutador condicional (`Flow Control Router`) con dos rutas diferenciadas por el campo `accion` (`respuesta` vs. `reporte`).
* Integrar la API de Google Sheets (`Add a Row` y `Search Rows`) para el registro estructurado de encuestas y la lectura masiva de datos históricos.
* Utilizar el módulo agregador de texto (`Text aggregator`) para condensar hasta 200 filas de respuestas en un solo bloque de texto, optimizando la ejecución y el consumo de créditos en el Agente de IA (`Make AI Agent`).
* Validar de manera crítica y cuantitativa los porcentajes emitidos por el Agente de IA comparándolos con fórmulas estadísticas (`COUNTIF` y `COUNTA`) calculadas directamente en Google Sheets.

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Webhooks, Router, Google Sheets Module, Text Aggregator, Make AI Agent, Webhook Response)
* **Almacenamiento de Datos:** Google Sheets (Pestaña Respuestas con registro temporal `formatDate`)
* **Motor de Inteligencia Artificial:** Make's AI Provider (`Make AI Agent`)
* **Lenguajes y Tecnologías Web:** HTML5, CSS3 y JavaScript (API Fetch y `URLSearchParams`)
* **Servicio de Hosting:** GitHub Pages
* **Muestra de Estudio:** Encuesta anónima aplicada a 20 personas de la comunidad local

## Código
[main.txt](Codigo/main.txt)

## Diagrama de Make / Imágenes del funcionamiento
[Diagrama del flujo en Make.com con Router de 2 rutas, hoja de Google Sheets e interfaz del formulario web]<img width="500" height="500" alt="WhatsApp Image 2026-11-10 at 13 03 06" src="https://github.com/user-attachments/assets/8c49aad8-7107-4183-bee7-93b6860d8b62" /><img width="500" height="500" alt="WhatsApp Image 2026-11-10 at 13 22 12" src="https://github.com/user-attachments/assets/107f7374-064a-4a3c-bc1c-aac1df67c62b" />


## Resultados
Durante el desarrollo y procesamiento de la encuesta de consumo se obtuvieron los siguientes resultados:
[Aqui va el pdf]()


## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/Fp4h2vnVkWk)
