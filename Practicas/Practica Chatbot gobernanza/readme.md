Chatbot Educativo de Gobernanza Ambiental
Este proyecto implementa un asistente virtual inteligente en Telegram integrado con Make.com y Make AI Agent (Anthropic Claude). El chatbot actúa como un tutor especializado para la asignatura de Desarrollo Sustentable (ACD-0908) del Tecnológico Nacional de México, campus Mazatlán, respondiendo dudas basándose exclusivamente en una base de conocimiento (Knowledge Base) compuesta por 6 documentos sobre Gobernanza Ambiental y Economía Circular.

Material utilizado
Telegram Bot API: Interfaz de mensajería para interacción con los estudiantes (@BotFather).

Make.com: Plataforma de automatización serverless para la orquestación del flujo.

Make AI Agent / Anthropic Claude API: Modelo de lenguaje generativo configurado para arquitectura RAG (Retrieval-Augmented Generation).

Base de Conocimiento (Knowledge Base): 6 documentos en formato PDF especializados en Gobernanza Ambiental y Economía Circular.

Filtros de control de flujo: Módulo de validación de entradas de texto en Make.

Diagrama del circuito / automatización
Configuración del Agente IA (System Prompt)
El comportamiento del modelo Claude dentro del módulo Make AI Agent se delimitó mediante las siguientes instrucciones estrictas:

Eres un asistente educativo especializado exclusivamente en el tema de Gobernanza Ambiental, para alumnos del curso Desarrollo Sustentable (ACD-0908) del Tecnológico Nacional de México, campus Mazatlán.

Debes responder ÚNICAMENTE con base en la información contenida en los archivos PDF que se te proporcionan en la base de conocimiento. No debes usar conocimiento externo, no debes inventar información, y no debes buscar en internet.

Responde siempre en español, en un máximo de 3 a 4 líneas (60-80 palabras aproximadamente). Sé directo y claro, sin explicaciones largas ni ejemplos adicionales, salvo que el alumno pida explícitamente más detalle.

Si la pregunta del alumno NO se puede responder con la información del PDF, responde exactamente:

"No cuento con información suficiente en el documento para responder esa pregunta. Mi función es exclusivamente resolver dudas sobre gobernanza ambiental con base en el material del curso."

Capturas de pantalla
Reporte Técnico
1. Resumen Ejecutivo
El presente trabajo documenta la conceptualización y despliegue de un chatbot educativo interactivo en Telegram para la materia de Desarrollo Sustentable. La solución utiliza un esquema de Generación Aumentada por Recuperación (RAG) mediante Make AI Agent, restringiendo las respuestas del modelo de inteligencia artificial exclusivamente a un acervo de 6 documentos PDF sobre Gobernanza Ambiental y Economía Circular. Esta arquitectura garantiza precisión académica, elimina las alucinaciones del LLM y minimiza el uso ineficiente de cómputo en la nube.

2. Planteamiento del Problema
En el ámbito educativo, las consultas sobre marcos normativos, economía circular y gobernanza ambiental suelen requerir la lectura de extensos documentos técnicos. El uso desmedido de modelos de lenguaje de propósito general (sin restricciones de contexto) genera respuestas imprecisas o demasiado extensas que incrementan innecesariamente el consumo de tokens y energía en servidores remotos. Existía la necesidad de crear un canal directo, inmediato y acotado que resuelva dudas puntuales sin salirse de la temática del curso.

3. Arquitectura del Sistema
La arquitectura del sistema sigue un patrón basado en eventos (Event-Driven Architecture) dividido en tres componentes principales:

Capa de Interacción (Telegram Bot): Captura en tiempo real los mensajes enviados por los alumnos mediante el módulo Watch Updates.

Capa de Control y Validación (Make Filter): Un filtro intermedio (Message: Text Exists) evalúa la carga útil. Si el usuario envía elementos no textuales (imágenes, audios o stickers), la ejecución se detiene para evitar procesamiento innecesario.

Capa de Razonamiento RAG (Make AI Agent + Knowledge Base): El agente procesa la pregunta consultando únicamente los 6 documentos PDF cargados en su base de conocimiento.

Capa de Respuesta (Telegram Bot): Devuelve el mensaje sintetizado directamente al chat privado del alumno (Chat ID).

4. Flujo de Datos
El estudiante envía un mensaje de texto al bot de Telegram.

El módulo Telegram Bot (Watch Updates) recibe la notificación vía Webhook.

El filtro Solo mensajes de texto valida que la entrada contenga contenido textual legible.

El Make AI Agent recibe la entrada, analiza el prompt del sistema y consulta la Knowledge Base (archivos PDF de gobernanza).

El agente genera una respuesta acotada (3-4 líneas) basada estrictamente en los PDFs.

El módulo Telegram Bot (Send a Text Message or a Reply) envía la respuesta procesada al usuario final.

5. Evaluación de Impacto (Green IT)
La implementación de esta solución se alinea con las mejores prácticas de Green IT bajo tres criterios:

Arquitectura Serverless: No requiere mantener un servidor encendido 24/7 en espera de peticiones, ejecutando el cómputo únicamente ante la llegada de un mensaje.

Filtrado Eficiente: Detener ejecuciones que no sean de texto previene el gasto innecesario de tokens e infraestructura de inferencia.

Acotamiento de Contexto (Prompt & RAG Target): Limitar las respuestas a un máximo de 80 palabras reduce significativamente el procesamiento del LLM, disminuyendo la energía consumida por token generado en los centros de datos de Anthropic.

6. Conclusiones
Se logró implementar con éxito un asistente virtual funcional, preciso y de bajo impacto ambiental para la asignatura de Desarrollo Sustentable. La integración de Telegram con Make AI Agent y la base de conocimiento especializada demuestra que es posible desplegar soluciones educativas avanzadas respaldando los principios de sostenibilidad tecnológica, optimización de recursos e inteligencia artificial responsable.
