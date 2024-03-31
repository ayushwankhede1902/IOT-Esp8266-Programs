
 // To test all IOs on ESP8266 Witty Cloud Development Board.

#define led 2
#define red 15
#define green 12
#define blue 13
#define ldr A0

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(red, HIGH);
  delay(100);
  digitalWrite(red, LOW);
  delay(100);
  digitalWrite(green, HIGH);
  delay(100);
  digitalWrite(green, LOW);
  delay(100);
  digitalWrite(blue, HIGH);
  delay(100);
  digitalWrite(blue, LOW);
  delay(100);
  Serial.println(analogRead(ldr));
}
