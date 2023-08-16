#include <NewPing.h> // Biblioteca para os sensores ultrassônicos

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int distancia = sonar.ping_cm(); // Medir a distância em centímetros

  if (distancia > 0 && distancia <= 20) { // Se detectar um obstáculo a menos de 20 cm
    // Girar para evitar o obstáculo
    // Pode usar servo motores ou controlar os motores das rodas para girar

  } else {
    // Seguir em frente
    // Controlar os motores para avançar

    delay(100); // Pequeno atraso para evitar leituras erráticas do sensor
  }
}
