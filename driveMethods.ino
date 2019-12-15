int motorA1 = 11;
int motorA2 = 10;
int motorB1 = 9;
int motorB2 = 8;

void setup() {    
  Serial.begin(9600);
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
}

void loop() {
  for(int i = 0; i < 255; i++){
    forward(i);
    delay(10);
  }
  delay(1000);
  pause();
  delay(1000);
  left(100);
  delay(1000);
  pause();
  delay(1000);
}

/********************************/

void forward(int rateF) {
  analogWrite(motorA1, rateF);
  analogWrite(motorA2, 0);
  analogWrite(motorB1, rateF);
  analogWrite(motorB2, 0);
}

void backward(int rateB) {
  analogWrite(motorA1, 0);
  analogWrite(motorA2, rateB);
  analogWrite(motorB1, 0);
  analogWrite(motorB2, rateB);
}

void left(int rateL) {
  analogWrite(motorA1, rateL);
  analogWrite(motorA2, 0);
  analogWrite(motorB1, 0);
  analogWrite(motorB2, rateL);
}

void right(int rateR) {
  analogWrite(motorA1, 0);
  analogWrite(motorA2, rateR);
  analogWrite(motorB1, rateR);
  analogWrite(motorB2, 0);
}

void pause() {
  analogWrite(motorA1, 0);
  analogWrite(motorA2, 0);
  analogWrite(motorB1, 0);
  analogWrite(motorB2, 0);
}


