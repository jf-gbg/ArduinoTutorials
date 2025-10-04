// Blink yellow LED 3 times 
// then
// Blink red LED 5 times

int yellowPin = 0;
int redPin = 1;

int dlyTime = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++) {
    digitalWrite(yellowPin, HIGH);
    delay(dlyTime);
    digitalWrite(yellowPin, LOW);
    delay(dlyTime);
  }

  for (int i = 0; i < 5; i++) {
    digitalWrite(redPin, HIGH);
    delay(dlyTime);
    digitalWrite(redPin, LOW);
    delay(dlyTime);
  }
}
