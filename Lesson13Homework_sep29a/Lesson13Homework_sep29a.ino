// hook a green, red and yellow led
// if voltage < 3 light green led
// if voltage > 3 < 4 yellow led
// if voltage > 4 turn on red

int analogIn = A2;
int readVal;
float V2;

int redPin = 9;
int yellowPin = 11;
int greenPin = 13;

int waitTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(analogIn, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(analogIn);
  V2 = (5./1023.) * readVal;

  Serial.print("Potentiometer voltage is ");
  Serial.println(V2);

  if (V2 < 3) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  }
  if (V2 >= 3 && V2 < 4) {
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
  }
  if (V2 >= 4) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
  }
  
  delay(waitTime);
}
