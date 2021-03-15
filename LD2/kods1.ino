byte digiRead1, digiRead2, digiWrite1, digiWrite2;
int analogRead1, analogRead2; // mainot frekvenci uz 20Mhz serial port monitorā deva negatīvu skaitli tāpēc nomainīju no byte uz int
byte analogWrite2, analogWrite1;
byte throwaway;
void setup() {
  Serial.begin(9600);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);


}

void loop() {
  digiRead1 = micros();
  throwaway = PORTA
  digiRead2 = micros();

  Serial.println(digiRead2 - digiRead1);

  digiWrite1 = micros();
  digitalWrite(1, HIGH);
  digiWrite2 = micros();

  Serial.println(digiWrite2 - digiWrite1);

  analogRead1 = micros();
  throwaway = analogRead(A0);
  analogRead2 = micros();

  Serial.println(analogRead2 - analogRead1);

  analogWrite1 = micros();
  analogWrite(A0, 1);
  analogWrite2 = micros();

  Serial.println(analogWrite2 - analogWrite1);
  delay(2000000); // bez delay izlaiž exit(0);
  exit(0);
}
