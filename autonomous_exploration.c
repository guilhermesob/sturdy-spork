#include <Servo.h>

Servo servo;  // Objeto para controlar o servo motor
int trigPin = 12;
int echoPin = 11;

void setup() {
  servo.attach(9);  // Pino 9 para o servo motor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance > 20) {
    moverParaFrente();
  } else {
    girarParaDireita();
    delay(1000);
  }
  delay(100);
}

void moverParaFrente() {
  // Código para mover o robô para a frente
}

void girarParaDireita() {
  servo.write(90);  // Girar o servo motor para a direita
}
