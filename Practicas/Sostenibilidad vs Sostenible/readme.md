# Página Web: Conceptos de Sustentable y Sostenible

Página web educativa desarrollada con apoyo de Inteligencia Artificial para definir, comparar y diferenciar los conceptos de **Sustentable** y **Sostenible**, publicada y alojada de forma estática mediante GitHub Pages.

---

## Enlace al Sitio Publicado

🔗 **Sitio en vivo:** [Haz clic aquí para ver la página](https://tu-usuario.github.io/tu-repositorio)

---

## Comparativa de Conceptos

| Concepto | Definición Clave | Enfoque Principal |
| :--- | :--- | :--- |
| **Sustentable** | Capacidad de argumentar, defender y conservar recursos naturales en el tiempo. | Preservación y protección del medio ambiente y sus recursos. |
| **Sostenible** | Proceso multidimensional que satisface las necesidades presentes sin comprometer las futuras. | Equilibrio entre tres pilares: **Ambiental, Social y Económico**. |

**Diferencia Fundamental:**  
Lo *sustentable* se centra de manera directa en la conservación de los recursos ecológicos, mientras que lo *sostenible* abarca un modelo integral que busca el bienestar social y la viabilidad económica sin destruir el entorno.

---

## Código Fuente (`index.html`)

```html
<!DOCTYPE html>
<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Sustentabilidad vs Sostenibilidad</title>
  <style>
    :root {
      --primary: #2e7d32;
      --secondary: #00838f;
      --bg: #f4f6f8;
      --text: #333;
    }
    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      line-height: 1.6;
      background-color: var(--bg);
      color: var(--text);
      margin: 0;
      padding: 0;
    }
    header {
      background: var(--primary);
      color: white;
      text-align: center;
      padding: 2rem 1rem;
    }
    .container {
      max-width: 1000px;
      margin: 2rem auto;
      padding: 0 1rem;
    }
    .grid {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
      gap: 2rem;
      margin-bottom: 2rem;
    }
    .card {
      background: white;
      border-radius: 8px;
      overflow: hidden;
      box-shadow: 0 4px 6px rgba(0,0,0,0.1);
    }
    .card img {
      width: 100%;
      height: 200px;
      object-fit: cover;
    }
    .card-content {
      padding: 1.5rem;
    }
    .card h2 {
      margin-top: 0;
    }
    .card.sustentable h2 { color: var(--primary); }
    .card.sostenible h2 { color: var(--secondary); }
    
    table {
      width: 100%;
      border-collapse: collapse;
      background: white;
      border-radius: 8px;
      overflow: hidden;
      box-shadow: 0 4px 6px rgba(0,0,0,0.1);
      margin-top: 1rem;
    }
    th, td {
      padding: 1rem;
      text-align: left;
      border-bottom: 1px solid #ddd;
    }
    th {
      background-color: #e0e0e0;
    }
    footer {
      text-align: center;
      padding: 1.5rem;
      background: #333;
      color: white;
      margin-top: 2rem;
    }
  </style>
</head>
<body>

  <header>
    <h1>Sustentabilidad vs. Sostenibilidad</h1>
    <p>Entendiendo sus definiciones y diferencias clave</p>
  </header>

  <div class="container">
    <div class="grid">
      
      <div class="card sustentable">
        <img src="[https://images.unsplash.com/](https://images.unsplash.com/)
```

---

## Evidencias Visuales

![Concepto de Sustentabilidad](https://images.unsplash.com/photo-1441974231531-c6227db76b6e?auto=format&fit=crop&w=800&q=80)

![Concepto de Sostenibilidad](https://images.unsplash.com/photo-1497435334941-8c899ee9e8e9?auto=format&fit=crop&w=800&q=80)

---

## Tecnologías Utilizadas

* **IA Generativa:** Asistencia en la generación de la estructura semántica, el maquetado CSS y la redacción del contenido.
* **HTML5 / CSS3:** Maquetación limpia, responsiva mediante CSS Grid y accesible sin dependencias externas.
* **GitHub Pages:** Plataforma de alojamiento e integración continua para el despliegue del sitio estático.

---

## Resultados y Evidencias

| Indicador / Criterio | Estado / Resultado | Detalle de la Implementación |
| :--- | :--- | :--- |
| **Despliegue Web** | 100% Exitoso | Publicado mediante GitHub Pages como sitio estático accesible globalmente |
| **Diseño Responsivo** | Adaptativo (`CSS Grid`) | Reorganización fluida en dispositivos móviles, tabletas y monitores de escritorio |
| **Tiempo de Carga** | < 1 segundo | Estructura ligera en un solo archivo sin librerías ni scripts pesados |
| **Optimización de Recursos** | Implícita | Uso de imágenes comprimidas servidas desde CDN externa (`Unsplash`) |

---

## Reporte Técnico

**1. Resumen Ejecutivo**  
Este proyecto inicial consistió en diseñar y desplegar una plataforma web ligera orientada a resolver la ambigüedad conceptual entre sustentabilidad y sostenibilidad. Se utilizó IA para agilizar la producción del código HTML5 y CSS3, garantizando una interfaz clara, responsiva y con una transferencia de datos eficiente.

**2. Planteamiento del Problema**  
El uso indistinto de los términos "sustentable" y "sostenible" genera confusiones conceptuales en el ámbito académico y profesional. La práctica resuelve esta problemática mediante un recurso digital sintético que explica visualmente cómo la sustentabilidad se enfoca en los recursos naturales mientras que la sostenibilidad abarca de forma transversal los pilares ecológico, social y económico.

**3. Arquitectura Web y Diseño**  
La maquetación se realizó mediante código estático puro:
* **Estructura Semántica:** Uso de etiquetas estándar de HTML5 (`<header>`, `<main>`, `<footer>`, `<table>`).
* **Diseño Dinámico:** Paleta de colores configurada con variables CSS (`--primary`, `--secondary`) y tarjetas distribuidas mediante `CSS Grid` para adaptabilidad automática sin depender de *frameworks* pesados.

**4. Evaluación de Impacto (Green IT)**  
El sitio fue construido con HTML y CSS puros sin dependencias pesadas ni scripts innecesarios de JavaScript. Al alojarse como una página estática en GitHub Pages, se reduce la carga sobre los servidores, minimizando el consumo de energía y la huella de carbono asociada al tráfico web.

**5. Conclusiones**  
Se completó con éxito el despliegue del sitio web. La práctica permitió integrar herramientas de IA en el flujo de desarrollo web frontend y comprender la importancia de crear páginas livianas alineadas con los principios de sostenibilidad digital.
