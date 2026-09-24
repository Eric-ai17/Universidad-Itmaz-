#include <DHT.h>

#define DHTPIN 2        // Pin de datos del sensor DHT11
#define DHTTYPE DHT11   // Tipo de sensor
#define LED_PIN 13      // Pin donde está conectado el LED

const float UMBRAL_TEMPERATURA = 25.0; // Umbral en °C

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW); // Iniciar con el LED apagado
}

void loop() {
  // El DHT11 necesita 2 segundos entre cada lectura
  delay(2000); 

  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature(); // Lectura en grados Celsius

  // Validar si la lectura falló
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer el sensor DHT11");
    return;
  }

  // Mostrar datos en el Monitor Serie
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print(" % | Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" *C");

  // Control del LED según la temperatura
  if (temperatura >= UMBRAL_TEMPERATURA) {
    digitalWrite(LED_PIN, HIGH); // Enciende o mantiene encendido el LED
    Serial.println(" -> Estado: LED ENCENDIDO (Temperatura >= 25°C)");
  } else {
    digitalWrite(LED_PIN, LOW);  // Apaga el LED
    Serial.println(" -> Estado: LED APAGADO (Temperatura < 25°C)");
  }
}
Recuerda abrir el Monitor Serie en el Arduino IDE a 9600 baudios para ver los datos en tiempo real.
