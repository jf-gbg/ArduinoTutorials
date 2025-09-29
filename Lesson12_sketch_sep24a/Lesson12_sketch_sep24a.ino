int analogIn = A2;
int readVal;
float V2;
int waitTime = 500;

int redPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogIn, INPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(analogIn);
  V2 = (5./1023.) * readVal;

  Serial.print("Potentiometer voltage is ");
  Serial.println(V2);

  if (V2 > 2.0 && V2 < 3.0) {
    digitalWrite(redPin, HIGH);
  } 
  else {
    digitalWrite(redPin, LOW);
  }

  delay(waitTime);
}
