int redPin = 7;
float radius;
float area;
float pi = 3.14;

String msg = "What is the radius of your circle?";
String msg2 = "Your circle has an area of: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0) {}

  radius = Serial.parseFloat();
  area = pi * radius * radius;
  Serial.print(msg2);
  Serial.println(area);
}
