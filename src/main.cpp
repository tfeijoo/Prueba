#include <Arduino.h>
#define LED_BUILTIN 4 // Define el pin 4
void setup() {
Serial.begin(115200);
pinMode(LED_BUILTIN, OUTPUT); // Configura el pin del LED como salida
}
void loop() {
digitalWrite(LED_BUILTIN, HIGH); // Enciende el LED
Serial.println("Encendido");
delay(3000); // Espera tres segundos
digitalWrite(LED_BUILTIN, LOW); // Apaga el LED
Serial.println("Apagado");
delay(3000); // Espera tres segundos
}