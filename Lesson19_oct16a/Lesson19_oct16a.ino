String chosenColor;
String msg = "Which color would you like?";
String msg2 = "Lighting ";

int redPin = 7;
int greenPin = 6;
int bluePin = 5;
int longDelay = 2000;
int shortDelay = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0) {}

  chosenColor = Serial.readString();
  if (chosenColor == "red" || chosenColor == "green" || chosenColor == "blue") {
    Serial.print(msg2);
    Serial.println(chosenColor);
    delay(shortDelay);
    
    if (chosenColor == "red") {
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);

    }
    if (chosenColor == "green") {
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, LOW);
    }
    if (chosenColor == "blue") {
      digitalWrite(bluePin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, LOW);
    }
  }
}
