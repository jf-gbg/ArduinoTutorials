// if lights are on turn on green led
// if lights are off turn on red led

int detectorPin = A0;
int lightVal;
int redPin = 8;
int greenPin = 9;
int dv = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(detectorPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(detectorPin);
  Serial.println(lightVal);

  if(lightVal >= 350) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  else {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }

  delay(dv);
}
