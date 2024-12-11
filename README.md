# Arduino LED Control

Este proyecto utiliza un Arduino para alternar el encendido y apagado de un LED conectado al pin 4. Además, se envía información al monitor serial indicando el estado actual del LED (encendido o apagado).

## Características del Proyecto
- Control de un LED conectado a un pin digital de Arduino.
- Mensajes en el monitor serial para indicar el estado del LED.
- Uso de `delay()` para alternar entre estados con un intervalo de tiempo definido.

## Requisitos
- Placa Arduino (UNO, Nano, Mega, etc.).
- Un LED externo y una resistencia (si no se usa el LED integrado).
- Software Arduino IDE.
- Cable USB para conectar la placa al ordenador.

## Configuración del Hardware
1. Conecta el cátodo del LED al pin GND de la placa Arduino.
2. Conecta el ánodo del LED al pin 4 de la placa Arduino a través de una resistencia (330 Ω es suficiente).

## Cómo Usarlo
1. Copia el siguiente código en el Arduino IDE:

```cpp
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
```

2. Selecciona el puerto y la placa correspondiente en el IDE.
3. Sube el código a la placa Arduino.
4. Abre el monitor serial y establece la velocidad de comunicación en 115200 baudios.

## Funcionamiento del Código
- En el `setup()`, se configura el pin 4 como salida y se inicializa la comunicación serial.
- En el `loop()`, el LED alterna entre encendido y apagado cada 3 segundos.
- Durante cada cambio de estado, se imprime un mensaje en el monitor serial indicando "Encendido" o "Apagado".

## Mejoras Futuras
- Sustituir `delay()` por el uso de `millis()` para evitar bloqueos y permitir multitarea.
- Agregar un botón para controlar manualmente el encendido y apagado del LED.
- Implementar un sistema de parpadeo configurable mediante comandos recibidos a través del monitor serial.

## Licencia
Este proyecto está disponible bajo la licencia MIT. Puedes usarlo, modificarlo y distribuirlo libremente.

---

¡Gracias por explorar este proyecto! Si tienes alguna duda o sugerencia, no dudes en contactarme.

