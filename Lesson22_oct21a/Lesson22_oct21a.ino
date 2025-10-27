// add potentiometer
// if over 1000 turn buzzer on

int myNum;
int potVal;
int wait = 2000;
int buzzPin = 8;
int potPin = A0;

String msg = "Please input your number";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);

  myNum = Serial.parseInt();
  while (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
  }

  digitalWrite(buzzPin, LOW);
}
