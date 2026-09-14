# Página Web: Conceptos de Sustentable y Sostenible

Página web educativa desarrollada con apoyo de Inteligencia Artificial para definir, comparar y diferenciar los conceptos de **Sustentable** y **Sostenible**, publicada y alojada de forma estática mediante GitHub Pages.

---

## Enlace al Sitio Publicado

🔗 **Sitio en vivo:** [Haz clic aquí para ver la página](https://eric-ai17.github.io/sustentable-vs-sostenible/)

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
      margin-top:
