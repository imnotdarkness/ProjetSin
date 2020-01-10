float rtr = 3600000;
float
temps = 5000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
 //unsigned long millis();
 Serial.println(temps);
 if ( temps <= millis()) {
   temps = temps + 5000;
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
 }
 }
