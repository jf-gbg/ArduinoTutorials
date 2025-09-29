// Red led 5 times fast
// Green led 10 times slow
// Blue led 15 times very slow

int redLed = 1;
int greenLed = 3;
int blueLed = 5;

int redMs = 50;
int greenMs = 150;
int blueMs = 300;

int sepMs = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(redLed, HIGH);
    delay(redMs);
    digitalWrite(redLed, LOW);
    delay(redMs);
  }

  delay(sepMs);

  for(int i = 0; i < 10; i++)
  {
    digitalWrite(greenLed, HIGH);
    delay(greenMs);
    digitalWrite(greenLed, LOW);
    delay(greenMs);
  }

  delay(sepMs);

  for(int i = 0; i < 15; i++)
  {
    digitalWrite(blueLed, HIGH);
    delay(blueMs);
    digitalWrite(blueLed, LOW);
    delay(blueMs);
  }

  delay(sepMs);
}
