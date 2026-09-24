# Nombre del proyecto
Monitoreo de Temperatura Ambiental y Control de Indicador LED con Arduino y Sensor DHT11

## Descripción
En esta práctica de la materia Desarrollo Sustentable con Automatización, se diseñó e implementó un sistema de monitoreo en tiempo real utilizando una tarjeta Arduino y un sensor de temperatura (DHT11). El sistema mide continuamente la temperatura ambiental del entorno y evalúa la lectura respecto a un umbral preestablecido de 26 °C. Cuando la temperatura supera los 26 °C, el sistema activa automáticamente un diodo LED como señal de alerta visual; en cuanto la temperatura disminuye y vuelve a estar en 26 °C o por debajo, el diodo LED se apaga automáticamente.
* Configurar la lectura de datos desde un sensor de temperatura ambiental en Arduino.
* Implementar lógica condicional (`if / else`) para la toma de decisiones basada en un umbral térmico (26 °C).
* Controlar la activación y desactivación de un diodo LED mediante pines de salida digital.
* Desplegar en tiempo real las lecturas de temperatura a través del Monitor Serie del IDE de Arduino.
* Documentar las evidencias de prueba y analizar el impacto del control automático en la eficiencia energética y sustentabilidad.

## Material y herramientas utilizadas
* **Microcontrolador:** Tarjeta Arduino Uno R3 / Nano
* **Sensor de Temperatura:** Sensor DHT11 (o LM35)
* **Indicador Visual:** Diodo LED (Rojo / Verde)
* **Componentes Pasivos:** Resistencia de 220 Ω y Protoboard
* **Conectividad:** Cables Dupont / Jumpers y Cable USB para programación
* **Software de Desarrollo:** IDE de Arduino

## Código
[Main.ino](/Codigo/Main.ino)
## Diagrama del circuito / Imágenes del funcionamiento
[Diagrama del circuito y Monitor Serie]<<img width="500" height="300" alt="Screenshot 2026-09-24 11 46 31" src="https://github.com/user-attachments/assets/d21e112f-8735-4826-b27c-b008cb2b78d9" /> <img width="500" height="300" alt="Screenshot 2026-09-24 11 46 06" src="https://github.com/user-attachments/assets/d013f8ea-12fa-494f-82ab-9fe6b78cb48a" /> 


## Video del funcionamiento

[](https://youtube.com/shorts/20iSwdYH3Vw)[](https://youtu.be/ZV5TLr5dLls)

## Resultados
Durante el desarrollo y pruebas del prototipo se obtuvieron los siguientes resultados:
* **Estado Normal (<= 26 °C):** Al mantener el sensor en condiciones de temperatura ambiente normales (24 °C - 25 °C), el diodo LED permaneció apagado y el Monitor Serie registró lecturas estables.
* **Activación por Umbral (> 26 °C):** Al aplicar calor controlado cerca del sensor para elevar la temperatura sobre los 26 °C, el microcontrolador detectó el cambio instantáneamente y encendió el LED indicador.
* **Restablecimiento Automático:** Una vez removida la fuente de calor y al descender la temperatura por debajo de los 26 °C, el diodo LED se apagó de inmediato, confirmando la respuesta correcta del algoritmo condicional.
