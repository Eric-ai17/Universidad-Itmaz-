# Nombre del proyecto
Página Web "IDH de mi Estado" - Consultor de Desarrollo Humano con Make.com e IA

## Descripción
En esta práctica de la materia Desarrollo Sustentable, se diseñó e implementó una página web interactiva alojada en GitHub Pages y conectada en tiempo real con una automatización en Make.com. Al seleccionar una de las 32 entidades federativas de México (como Sinaloa), la aplicación envía una solicitud vía Webhook a un Agente de Inteligencia Artificial (`Make AI Agent`). La IA consulta una base de conocimientos extraída del informe oficial del PNUD (`IDH_entidades.pdf`) y responde en texto plano desplegando el IDH, sus tres componentes (salud, educación e ingreso), el lugar nacional y un análisis cualitativo sobre su desarrollo sustentable.

## Objetivos de aprendizaje
* Comprender e interpretar el Índice de Desarrollo Humano (IDH) y sus tres dimensiones fundamentales (salud, educación e ingreso).
* Configurar una arquitectura de integración web con Make.com mediante `Custom Webhooks` y respuestas personalizadas en `Webhook Response` (con encabezados CORS y `text/plain`).
* Integrar un Agente de IA (`Make AI Agent`) respaldado por un documento de conocimiento (`Knowledge Base`) para evitar alucinaciones y restringir las respuestas a datos oficiales del PNUD.
* Desplegar una aplicación web responsiva en GitHub Pages capaz de realizar peticiones asíncronas `POST` mediante `fetch` y `URLSearchParams`.
* Validar la exactitud de la información generada por la IA mediante la comparación directa con las tablas oficiales del informe del PNUD.

## Material y herramientas utilizadas
* **Plataforma de Automatización:** Make.com (Webhooks, Make AI Agent, Webhook Response)
* **Motor de IA:** Make's AI Provider (con base de conocimiento `IDH_entidades.pdf`)
* **Fuente de Datos:** Informe oficial del PNUD ("Índice de Desarrollo Humano para las entidades federativas, México")
* **Lenguajes y Tecnologías Web:** HTML5, CSS3 y JavaScript (API Fetch)
* **Servicio de Hosting:** GitHub Pages
* **IA Generativa:** Claude (asistente de maquetación web)[main.txt](Codigo/main.txt)
## Diagrama de Make / Imágenes
[Diagrama del flujo en Make.com e interfaz de chat]<img width="500" height="300" alt="WhatsApp Image 2026-10-26 at 11 30 58" src="https://github.com/user-attachments/assets/8ce53ae1-762d-4056-8bc6-1a2ba2c02d0f" />
<img width="500" height="300" alt="WhatsApp Image 2026-10-26 at 11 31 12" src="https://github.com/user-attachments/assets/7881dcae-bd00-4b25-896f-7a75b6ee6d71" />

## Resultados
[Aqui va el PDF](https://github.com/Eric-ai17/Universidad-Itmaz-/blob/main/Practicas/IDH%20de%20mi%20estado/Resultados/Reporte%20de%20Resultados%20-%20IDH%20de%20mi%20Estado.pdf)
## Video del funcionamiento
[Ver video en YouTube](https://youtu.be/SI-QF-pOwyM)
