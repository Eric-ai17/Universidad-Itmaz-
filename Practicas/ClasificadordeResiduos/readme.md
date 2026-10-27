# Nombre del proyecto
Clasificador de Residuos por Fotografía mediante Bot de Telegram y Agente de IA con Visión en Make.com

## Descripción
En esta práctica de la materia Desarrollo Sustentable, se diseñó e implementó un bot inteligente en Telegram integrado con la plataforma Make.com y un Agente de Inteligencia Artificial con capacidad de visión artificial (`Make AI Agent`) El sistema recibe fotografías de distintos residuos capturadas por los usuarios, las descarga en alta resolución y las analiza mediante visión por computadora para clasificar el tipo de residuo (orgánico, inorgánico reciclable, inorgánico no reciclable o de manejo especial/peligro). Asimismo, el bot indica el material principal, aclara si es reciclable, señala el contenedor correspondiente, estima su tiempo aproximado de degradación y brinda un consejo práctico para reducir o reutilizar dicho residuo

## Objetivos de aprendizaje
* Configurar un captador de eventos en tiempo real (`Watch Updates` / Webhook) mediante la API de Telegram Bot en Make.com
* Implementar filtros condicionales para validar la recepción de imágenes y gestionar su descarga con el módulo `Download a File` usando la función `last()` para seleccionar la fotografía de mayor calidad
* Integrar un Agente de IA con capacidad de visión (`Make AI Agent`) respaldado por el proveedor de IA de Make (`Make's AI Provider`)
* Estructurar un *System Prompt* estricto para estandarizar las respuestas en texto plano con formato estructurado (material, clasificación, reciclabilidad, destino, tiempo de degradación y consejos)
* Evaluar el porcentaje de precisión de la IA comparando los resultados contra fuentes oficiales sobre la huella ecológica y el impacto ambiental de los residuos en los canales y mar de Mazatlán

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Plan Pro / `Make's AI Provider`)
* **Bot de Mensajería:** Telegram Bot API (creado mediante `@BotFather`)
* **Agente de IA con Visión:** Make AI Agent (Visión por computadora)
* **Gestión de Archivos:** Módulo `Download a File` de Telegram Bot (con función `last()`)
* **Dispositivo de Captura:** Teléfono inteligente con cámara y aplicación de Telegram
* **Muestras de Evaluación:** 10 residuos domésticos/escolares (PET, latas, unicel, tetrapak, cáscaras, pilas, etc.)

## Código
[main.txt][Codigo/main.txt]
## Diagrama del circuito / Imágenes del funcionamiento
[Aqui van el pdf]<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/91074dc4-d974-4448-a016-fbae7d8b8868" /> <img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/a53fceef-4ef5-4203-8fc9-99f24359eb08" />

## Resultados
[Aqui van el pdf](https://github.com/Eric-ai17/Universidad-Itmaz-/blob/main/Practicas/ClasificadordeResiduos/resultados/resultadoschatresiduos.pdf)
## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/E_rpittXn9A)
