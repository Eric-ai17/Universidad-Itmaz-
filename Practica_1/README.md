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
// Parpadeo secuencial de 10 LEDs - Arduino Uno R3
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
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);

  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);

  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  delay(500);

  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led4, LOW);
  delay(500);

  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led5, LOW);
  delay(500);

  digitalWrite(led6, HIGH);
  delay(500);
  digitalWrite(led6, LOW);
  delay(500);

  digitalWrite(led7, HIGH);
  delay(500);
  digitalWrite(led7, LOW);
  delay(500);

  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);

  digitalWrite(led9, HIGH);
  delay(500);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(led10, HIGH);
  delay(500);
  digitalWrite(led10, LOW);
  delay(500);
}

## Video del funcionamiento
[Ver video en YouTube](https://www.youtube.com/watch?v=TU_LINK_AQUI)

## Evidencias de armado
![Evidencia de armado](Diagrama/mi_foto_armado.png)

## Reporte
Incluye [Resultados.pdf](Resultados/Resultados.pdf)
* Gráficas (insertar imagen o link)
* Tablas de datos
* Observaciones sobre el comportamiento del sistema.

## Conclusiones
La práctica permitió reforzar el uso de las funciones básicas de salida digital y temporización en Arduino (digitalWrite y delay)...

## Resultados
[Resultados.pdf](Resultados/Resultados.pdf)
