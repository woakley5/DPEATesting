void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));

}
