# Proyecto 1: Página Web — Sustentabilidad vs. Sostenibilidad

Página web interactiva, responsiva y ultraligera desarrollada con HTML5 y CSS3 puros para clarificar las diferencias conceptuales entre **Sustentabilidad** y **Sostenibilidad**, publicada de forma estática a través de **GitHub Pages**.

---

## Enlace al Sitio Publicado

🔗 **Sitio en Vivo:** [Ver página publicada](https://eric-ai17.github.io/sustentable-vs-sostenible/)

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
        <img src="[https://images.unsplash.com/photo-1441974231531-c6227db76b6e?auto=format&fit=crop&w=800&q=80](https://images.unsplash.com/photo-1441974231531-c6227db76b6e?auto=format&fit=crop&w=800&q=80)" alt="Conservación ambiental y recursos naturales">
        <div class="card-content">
          <h2>1. Sustentabilidad</h2>
          <p><strong>Enfoque:</strong> Biológico y Ambiental.</p>
          <p>Se refiere a la capacidad de preservar, proteger y conservar los recursos naturales para garantizar que las generaciones presentes y futuras puedan disponer de ellos. Se centra principalmente en el cuidado del entorno ecológico y el uso eficiente del agua, energía y suelo.</p>
        </div>
      </div>

      <div class="card sostenible">
        <img src="[https://images.unsplash.com/photo-1497435334941-8c899ee9e8e9?auto=format&fit=crop&w=800&q=80](https://images.unsplash.com/photo-1497435334941-8c899ee9e8e9?auto=format&fit=crop&w=800&q=80)" alt="Energías renovables y desarrollo integral">
        <div class="card-content">
          <h2>2. Sostenibilidad</h2>
          <p><strong>Enfoque:</strong> Integrado (Ecológico, Social y Económico).</p>
          <p>Es un proceso holístico que busca satisfacer las necesidades actuales sin comprometer a las futuras generaciones, equilibrando tres pilares fundamentales: el desarrollo económico, la inclusión social y la protección del medio ambiente (siguiendo el marco de la ONU).</p>
        </div>
      </div>

    </div>

    <b style="font-size: 1.3rem;">Diferencias Clave</b>
    <table>
      <thead>
        <tr>
          <th>Criterio</th>
          <th>Sustentabilidad</th>
          <th>Sostenibilidad</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td><strong>Alcance</strong></td>
          <td>Centrado principalmente en la ecología y los recursos naturales.</td>
          <td>Integral: abarca sociedad, economía y medio ambiente.</td>
        </tr>
        <tr>
          <td><strong>Objetivo Principal</strong></td>
          <td>Preservar el entorno natural y evitar el agotamiento de recursos.</td>
          <td>Lograr un desarrollo duradero, equitativo y socialmente justo.</td>
        </tr>
        <tr>
          <td><strong>Ejemplo</strong></td>
          <td>Reforestación de un bosque o uso eficiente del agua potable.</td>
          <td>Crear una empresa de energía limpia que genere empleos dignos.</td>
        </tr>
      </tbody>
    </table>
  </div>

  <footer>
    <p>Página creada para tarea académica — Publicado mediante GitHub Pages</p>
  </footer>

</body>
</html>
