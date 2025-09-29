int redPin = 3;

int brightLow = 50;
int brightMedium = 150;
int brightHigh = 200;
int brightMax = 255;

int wait = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, brightLow);
  delay(wait);

  analogWrite(redPin, brightMedium);
  delay(wait);

  analogWrite(redPin, brightHigh);
  delay(wait);

  analogWrite(redPin, brightMax);
  delay(wait);

  analogWrite(redPin, brightHigh);
  delay(wait);

  analogWrite(redPin, brightMedium);
  delay(wait);
}
