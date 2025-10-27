float vorigeTijd = 0;
float interval = 1000;


void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
digitalWrite(13, HIGH);
vorigeTijd = millis();
}

void loop() {

if (millis()-vorigeTijd >= interval) {
  digitalWrite(13, !digitalRead(13));
  vorigeTijd = millis();
}
}
