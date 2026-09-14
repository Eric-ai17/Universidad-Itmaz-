# GreenIT - El precio invisible de la nube

Breve descripción del proyecto

## Descripción
Página web interactiva y sistema de automatización para concientizar sobre el impacto ambiental del almacenamiento en la nube (consumo de energía, refrigeración por agua y huella ecológica de los centros de datos). El sistema captura las opiniones de los usuarios mediante un formulario web, las registra en tiempo real en Google Sheets y envía un correo electrónico de agradecimiento automático utilizando Make.

## Objetivos de aprendizaje
Diseñar e implementar una solución web asistida por IA generativa (Claude) e integrar un flujo de automatización en Make para procesar datos de un formulario, guardarlos en una hoja de cálculo y enviar correos automáticos sin necesidad de un servidor backend tradicional.

## Material utilizado
Enumera todos los componentes usados:
* Claude AI (IA Generativa para maquetación web)
* HTML5 / CSS3
* Make (Integromat - Webhooks, Google Sheets, Gmail)
* Google Sheets
* Gmail API

## Diagrama del circuito
[Flujo de automatización en Make](Resultados/captura_make.png)

## Código

```html
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>GreenIT - Nada se guarda en el aire</title>
</head>
<body>
    <h1>Nada se guarda en el aire</h1>
    <p>"La nube" son miles de máquinas físicas prendidas todo el día en algún edificio del planeta.</p>

    <!-- Formulario conectado a Make vía Webhook -->
    <form action="[https://hook.us2.make.com/tu-webhook-id](https://hook.us2.make.com/tu-webhook-id)" method="POST">
        <label for="nombre">Nombre:</label>
        <input type="text" id="nombre" name="nombre" required>

        <label for="correo">Correo electrónico:</label>
        <input type="email" id="correo" name="correo" required>

        <label for="opinion">Su opinión:</label>
        <textarea id="opinion" name="opinion" required></textarea>

        <button type="submit">Enviar opinión</button>
    </form>
</body>
</html>
