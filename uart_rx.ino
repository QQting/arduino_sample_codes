char mystr;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){
    mystr = Serial.read();
    Serial.print(mystr);
  }
}
