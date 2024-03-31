
// To make ESP8266 Witty Cloud Development Board as an access point (AP)/hotspot.

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(115200);
  WiFi.softAP("esp","esp@8266");
  Serial.println();
  Serial.println("Wifi hostspot started");
  Serial.println(WiFi.softAPIP());
  server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
   client = server.available();

  if(client) {
    String request = client.readStringUntil('\n');
    Serial.println(request);
    request.trim();
    if (request =="GET /ledON HTTP/1.1") {
      digitalWrite(green,HIGH);
    }
    if (request =="GET /ledOFF HTTP/1.1") {
      digitalWrite(green,LOW);
    }
  }
}
