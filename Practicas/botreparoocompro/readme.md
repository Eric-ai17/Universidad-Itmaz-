# Nombre del proyecto
Bot de Telegram "¿Reparo o Compro?" - Asesor de Reparación y Evaluación de Obsolescencia con Make.com e IA

## Descripción
En esta práctica de la materia Desarrollo Sustentable (Unidad 4: Escenario Económico), se diseñó e implementó un bot interactivo de Telegram integrado con Make.com y un Agente de Inteligencia Artificial (`Make AI Agent`) para analizar fallas en aparatos electrónicos y electrodomésticos[cite: 29, 30]. El sistema recibe la descripción técnica enviada por el usuario, evalúa las causas probables de la falla, clasifica el tipo de obsolescencia (planificada vs. percibida), contrasta los costos estimados de reparación frente al valor de un aparato nuevo, analiza el impacto ambiental por generación de residuos electrónicos y emite una recomendación sustentable (reparar, reemplazar o donar/reciclar) junto con indicaciones de acopio en Mazatlán, Sinaloa.

## Objetivos de aprendizaje
* Distinguir y caracterizar la obsolescencia planificada y la obsolescencia percibida a través del análisis de fallas en aparatos de uso cotidiano.
* Configurar un bot de Telegram utilizando `@BotFather` e integrarlo a la plataforma Make.com mediante el módulo `Watch Updates`.
* Implementar filtros condicionales (`Message Text Exists` y `Text Does not start with /`) en Make.com para optimizar el consumo de créditos y evitar ejecuciones accidentales con comandos o archivos multimedia.
* Diseñar las instrucciones de un Agente de IA (`Make AI Agent`) utilizando `Make's AI Provider` para generar diagnósticos técnicos estandarizados en formato de texto plano sin caracteres de marcado.
* Validar y contrastar la precisión de los diagnósticos y costos estimados por la IA comparándolos con cotizaciones reales en talleres de reparación locales de Mazatlán.

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Módulos `Watch Updates`, `Make AI Agent`, `Send a Text Message or a Reply`)
* **Bot de Mensajería:** Telegram Bot API (creado mediante `@BotFather`)
* **Motor de Inteligencia Artificial:** Make's AI Provider (`Make AI Agent`)
* **Dispositivo de Interacción:** Cliente móvil o web de Telegram
* **Casos de Evaluación:** 6 aparatos con fallas reales y cotizaciones comparativas en talleres de reparación de Mazatlán.

## Código
[main.txt](Codigo/main.txt)

## Diagrama del circuito / Imágenes del funcionamiento
[Diagrama del flujo en Make.com e interfaz del bot de Telegram con evaluación de fallas]<img width="500" height="500" alt="Screenshot 2026-11-10 10 31 08" src="https://github.com/user-attachments/assets/32c7583c-00b5-4c4c-a23a-1510bd509dae" /><img width="500" height="500" alt="WhatsApp Image 2026-11-10 at 10 33 49" src="https://github.com/user-attachments/assets/ba2f6982-96ae-4698-89ac-95c453579238" />


## Resultados
[Aqui va El pdf]

## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/zZ-zyXP9Zb4)
