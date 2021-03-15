byte digiRead1, digiRead2, digiWrite1, digiWrite2;
int analogRead1, analogRead2;
byte analogWrite2, analogWrite1;
byte throwaway;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);


}

void loop() {
  digiRead1 = micros();
  //VPORTF.IN |= 0b10000;
  //VPORTF.IN = 0;
  digiRead2 = micros();

  Serial.println(digiRead2 - digiRead1);

  digiWrite1 = micros();
  VPORTA.OUT |= 0b01;
  VPORTA.OUT = 0;
  digiWrite2 = micros();

  Serial.println(digiWrite2 - digiWrite1);

  analogRead1 = micros();
  throwaway = analogRead(A0);
  analogRead2 = micros();

  Serial.println(analogRead2 - analogRead1);

  analogWrite1 = micros();
  analogWrite(A5, 1);
  analogWrite2 = micros();

  Serial.println(analogWrite2 - analogWrite1);
  delay(2000000); // bez delay izlaiž exit(0);
  exit(0);
}
