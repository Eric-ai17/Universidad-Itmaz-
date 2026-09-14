# Nombre del proyecto
Parpadeo de LED con Arduino (Blink)

## Descripción
El objetivo de este código expone cómo prender y apagar un LED.

## Objetivos de aprendizaje
Programar y simular en Arduino el encendido y apagado intermitente (parpadeo) de un LED conectado al pin digital 13, utilizando la función delay() para generar un efecto visualmente perceptible.

## Material utilizado
Enumera todos los componentes usados:
* Arduino Uno R4 WiFi
* Protoboard
* Led
* Cables Dupont
* Resistencia 220 ohms

## Diagrama del circuito
![Diagrama del circuito](Diagrama/mi_diagrama.png)

## Código

```cpp
// Encender 10 LEDs - Arduino Uno R3
// Cada LED tiene su propia variable

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
}
```

## Video del funcionamiento
[Ver video en YouTube](https://youtube.com/shorts/gh4UONjyHJ0?feature=share)

## Evidencias de armado
<img src="https://github.com/user-attachments/assets/835b7d67-9270-428f-96dd-24421c6734a3" alt="Evidencia de armado arduino" width="100%">

## Reporte
<img src="https://github.com/user-attachments/assets/82a634f4-e832-460e-98a7-aefbb0c91239" alt="Reporte de resultados" width="100%">

* **Gráficas / Diagrama:** Conexión secuencial en pines digitales del Arduino Uno.
* **Tablas de datos:** Resistencias de 220 Ω, consumo por LED ~13.8 mA.
* **Observaciones:** Secuencia de 10 LEDs funcionando correctamente con temporización de 500 ms.

## Conclusiones
La práctica permitió reforzar el uso de las funciones básicas de salida digital y temporización en Arduino (`digitalWrite` y `delay`).

## Resultados
<img src="https://github.com/user-attachments/assets/82a634f4-e832-460e-98a7-aefbb0c91239" alt="Resultados de la práctica" width="100%">
