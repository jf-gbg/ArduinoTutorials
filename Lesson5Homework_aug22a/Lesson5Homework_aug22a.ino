//TASK
// 4 Leds doing 0-15 in binary

int led1 = 1;
int led2 = 3;
int led4 = 5;
int led8 = 7;

int wait = 1000;
int shortWait = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //System On
  for(int i = 0; i < 4; i++)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led8, HIGH);
    delay(shortWait);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led8, LOW);
    delay(shortWait);
  }

  //0 0000
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led8, LOW);
  delay(wait);

  //1 0001
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led8, LOW);
  delay(wait);

  //2 0010
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led8, LOW);
  delay(wait);

  //3 0011
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led8, LOW);
  delay(wait);

  //4 0100
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, LOW);
  delay(wait);

  //5 0101
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, LOW);
  delay(wait);
  
  //6 0110
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, LOW);
  delay(wait);

  //7 0111
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, LOW);
  delay(wait);

  //8 1000
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led8, HIGH);
  delay(wait);

  //9 1001
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led8, HIGH);
  delay(wait);

  //10 1010
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led8, HIGH);
  delay(wait);

  //11 1011
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led8, HIGH);
  delay(wait);

  //12 1100
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, HIGH);
  delay(wait);  

  //13 1101
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, HIGH);
  delay(wait);

  //14 1110
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, HIGH);
  delay(wait);

  //15 1111
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led8, HIGH);
  delay(wait);
}


