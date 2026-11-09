# Nombre del proyecto
Simulador de Oferta y Demanda con Arduino UNO R4 WiFi, Matriz LED, Make.com y Telegram

## Descripción
En esta práctica de la materia Desarrollo Sustentable (Unidad 4: Escenario Económico), se diseñó e implementó un simulador físico de mercado mediante un sistema IoT interactivo. Utilizando un microcontrolador Arduino UNO R4 WiFi y dos potenciómetros analógicos que representan la oferta y la demanda del mercado de camarón en Sinaloa, el sistema calcula en tiempo real el precio de equilibrio por kilogramo, desplegándolo dinámicamente en la matriz LED integrada de la placa. Cuando el sistema detecta una condición crítica de escasez (donde la demanda supera a la oferta por un margen de 25 unidades o más), el Arduino transmite de forma segura vía HTTPS un Webhook hacia Make.com, el cual activa un bot de Telegram que notifica a los productores o cooperativas una alerta instantánea con el desglose del mercado.

## Objetivos de aprendizaje
* Explicar cómo la interacción entre la oferta y la demanda fija los precios de mercado, relacionando la escasez de recursos naturales (como la veda de camarón en el Pacífico mexicano) con la variación de precios.
* Configurar entradas analógicas en la placa Arduino UNO R4 WiFi conectando potenciómetros a los pines A0 (demanda) y A1 (oferta), aplicando funciones de mapeo de escala (`map()`) de 0-1023 a 10-90.
* Programar las librerías `ArduinoGraphics` y `Arduino_LED_Matrix` para desplegar texto dinámico con desplazamiento en la matriz LED integrada.
* Implementar peticiones seguras HTTPS mediante la librería `WiFiSSLClient` para la transmisión de parámetros `GET` (`demanda`, `oferta`, `precio`, `estado`) hacia Make.com.
* Integrar un bot de Telegram vía Webhook en Make.com aplicando temporización de alertas (`millis()`) para limitar el tráfico a máximo una notificación por minuto.

## Material y herramientas utilizadas
* **Microcontrolador:** Arduino UNO R4 WiFi con cable USB-C (con matriz LED de 12x8 incorporada)
* **Componentes Electrónicos:** 2 potenciómetros de 10 kΩ, protoboard y cables jumper
* **Entorno de Desarrollo:** Arduino IDE (librerías `WiFiS3`, `ArduinoGraphics` y `Arduino_LED_Matrix`)
* **Plataforma de Automatización:** Make.com (Custom Webhooks, Telegram Bot Module)
* **Servicio de Mensajería:** Telegram Bot API (creado mediante `@BotFather`)
* **Conectividad:** Red WiFi de 2.4 GHz con protocolo `WiFiSSLClient` (Puerto 443)

## Código
[main.txt](Codigo/main.txt)

## Diagrama del circuito / Imágenes del funcionamient
[Esquema de conexiones del circuito con los 2 potenciómetros, visualización en matriz LED e interfaz de alertas en Telegram]<img width="500" height="500" alt="image" src="https://github.com/user-attachments/assets/ce08632f-9084-4237-b06f-b014e333e4d1" /><img width="500" height="500" alt="Screenshot 2026-11-09 12 25 56" src="https://github.com/user-attachments/assets/0b0abb30-115a-41d2-aa74-5d99b959fd60" />
<img width="500" height="500" alt="WhatsApp Image 2026-11-09 at 12 27 28" src="https://github.com/user-attachments/assets/b0c65520-5411-41a9-a149-a1da51480956" />



## Resultados
[Aqui va el pdf]()
## Video del funcionamiento
[Aqui va el video de youtube](https://youtube.com/shorts/-sbIWqR7zhg)
