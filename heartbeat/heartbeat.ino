

void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}
int n = 0;
void loop() {
  delay(1000);
   int time = millis();
  Serial.print(time);
  Serial.println(" milliseconds elapsed.");
  n = n + 1;
  Serial.print(n);
  Serial.println(" seconds have elapsed");
  digitalWrite(13, HIGH);
  delay(1000);
  time = millis();
  Serial.print(time);
  Serial.println(" milliseconds elapsed.");
  n = n + 1;
  Serial.print(n);
  Serial.println(" seconds have elapsed");
  digitalWrite(13, LOW);
}
