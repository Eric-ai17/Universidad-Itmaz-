# Nombre del proyecto
Simulador de Oferta y Demanda con Arduino UNO R4 WiFi, Matriz LED, Make.com y Telegram

## Descripción
En esta práctica de la materia Desarrollo Sustentable (Unidad 4: Escenario Económico), se diseñó e implementó un simulador físico de mercado mediante un sistema IoT interactivo[cite: 24]. Utilizando un microcontrolador Arduino UNO R4 WiFi y dos potenciómetros analógicos que representan la oferta y la demanda del mercado de camarón en Sinaloa, el sistema calcula en tiempo real el precio de equilibrio por kilogramo, desplegándolo dinámicamente en la matriz LED integrada de la placa[cite: 24, 25]. Cuando el sistema detecta una condición crítica de escasez (donde la demanda supera a la oferta por un margen de 25 unidades o más), el Arduino transmite de forma segura vía HTTPS un Webhook hacia Make.com, el cual activa un bot de Telegram que notifica a los productores o cooperativas una alerta instantánea con el desglose del mercado[cite: 24, 25, 26, 27].

## Objetivos de aprendizaje
* Explicar cómo la interacción entre la oferta y la demanda fija los precios de mercado, relacionando la escasez de recursos naturales (como la veda de camarón en el Pacífico mexicano) con la variación de precios[cite: 24, 25].
* Configurar entradas analógicas en la placa Arduino UNO R4 WiFi conectando potenciómetros a los pines A0 (demanda) y A1 (oferta), aplicando funciones de mapeo de escala (`map()`) de 0-1023 a 10-90[cite: 25, 27].
* Programar las librerías `ArduinoGraphics` y `Arduino_LED_Matrix` para desplegar texto dinámico con desplazamiento en la matriz LED integrada[cite: 25, 27].
* Implementar peticiones seguras HTTPS mediante la librería `WiFiSSLClient` para la transmisión de parámetros `GET` (`demanda`, `oferta`, `precio`, `estado`) hacia Make.com[cite: 26, 27].
* Integrar un bot de Telegram vía Webhook en Make.com aplicando temporización de alertas (`millis()`) para limitar el tráfico a máximo una notificación por minuto[cite: 26, 27, 28].

## Material y herramientas utilizadas
* **Microcontrolador:** Arduino UNO R4 WiFi con cable USB-C (con matriz LED de 12x8 incorporada)[cite: 25]
* **Componentes Electrónicos:** 2 potenciómetros de 10 kΩ, protoboard y cables jumper[cite: 25]
* **Entorno de Desarrollo:** Arduino IDE (librerías `WiFiS3`, `ArduinoGraphics` y `Arduino_LED_Matrix`)[cite: 25, 27]
* **Plataforma de Automatización:** Make.com (Custom Webhooks, Telegram Bot Module)[cite: 25, 26]
* **Servicio de Mensajería:** Telegram Bot API (creado mediante `@BotFather`)[cite: 25]
* **Conectividad:** Red WiFi de 2.4 GHz con protocolo `WiFiSSLClient` (Puerto 443)[cite: 25, 27]

## Código
[main.txt](Codigo/main.txt)

## Diagrama del circuito / Imágenes del funcionamiento
[Esquema de conexiones del circuito con los 2 potenciómetros, visualización en matriz LED e interfaz de alertas en Telegram]<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/tu-imagen-aqui-1" />
<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/tu-imagen-aqui-2" />

## Resultados
Durante el desarrollo y simulación de los escenarios de mercado se obtuvieron los siguientes resultados:

* **Cálculo y Visualización de Precio de Equilibrio:** El Arduino procesó los valores analógicos de oferta y demanda en tiempo real, calculando el precio estimado por kilogramo de camarón y desplegándolo continuamente en la matriz LED[cite: 24, 27].
* **Detección Automática de Escasez:** Al simular escenarios críticos (como veda de camarón o huracanes que paralizan la pesca), la condición de escasez (`demanda - oferta >= 25`) se cumplió exitosamente, activando la transmisión del Webhook hacia Make.com[cite: 26, 27, 28].
* **Integración con Telegram y Control de Tráfico:** El bot de Telegram entregó notificaciones con el precio de equilibrio y estado del mercado, garantizando que el temporizador por software respetara el límite de una alerta por minuto sin gastar recursos innecesarios[cite: 26, 27, 28].

## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/tu-video-aqui)
