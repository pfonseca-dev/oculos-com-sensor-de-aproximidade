const int pinoBuzzer = 2;
const int triggerPin = 5;
const int echoPin = 7;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  cm = 0.01723 * readUltrasonicDistance(triggerPin, echoPin);
  
  Serial.print(cm);
  Serial.println(" cm");

  if(cm <= 5 && cm > 0){
    tone(pinoBuzzer, 1500); // Som contínuo
  }
  else if(cm > 5 && cm <= 20){
    tone(pinoBuzzer, 1500);
    delay(100); // Pisca rápido
    noTone(pinoBuzzer);
    delay(100);
  }
  else if(cm > 20 && cm <= 40){
    tone(pinoBuzzer, 1500);
    delay(300); // Pisca médio
    noTone(pinoBuzzer);
    delay(300);
  }
  else if(cm > 40 && cm <= 50){
    tone(pinoBuzzer, 1500);
    delay(600); // Pisca lento
    noTone(pinoBuzzer);
    delay(600);
  }
  else{
    noTone(pinoBuzzer); // Fora da faixa
  }
}