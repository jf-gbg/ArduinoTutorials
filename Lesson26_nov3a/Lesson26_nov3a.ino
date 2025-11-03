// change the tone depending on how bright it is in the room
int buzzPin = 8;
int photoPin = A0;
int photoVal;
float toneVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(photoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoPin);

  toneVal = 9940 - (9940./1023.) * (photoVal) + 60;

  Serial.print(photoVal);
  Serial.print(" - ");
  Serial.println(toneVal);

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(toneVal);
}
