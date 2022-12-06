void setup()
{
pinMode(11, INPUT);
pinMode(13, INPUT);
pinMode(12, INPUT);
pinMode(10, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void go_nazad()
{
digitalWrite(10, HIGH);
digitalWrite(3, HIGH);

digitalWrite(8, LOW);
digitalWrite(9, HIGH);

digitalWrite(2, HIGH);
digitalWrite(4, LOW);
}

void loop()
{
if(digitalRead(11) == 1)
{
digitalWrite(10, HIGH);
digitalWrite(3, HIGH);
}
else{
digitalWrite(10, LOW);
digitalWrite(3, LOW);

}
if (digitalRead(13) == 0 && digitalRead(12) == 1) {
go_nazad();
delay(65);
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(4, LOW);
digitalWrite(2, HIGH);
delay(190);
Serial.println("1");
}
if (digitalRead(13) == 0 && digitalRead(12) == 0) {
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(4, HIGH);
digitalWrite(2, LOW);
delay(50);
Serial.println("2");
}
if (digitalRead(13) == 1 && digitalRead(12) == 1) {
go_nazad();
delay(65);
digitalWrite(10, LOW);
digitalWrite(3, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
delay(190);
Serial.println("3");
}
if (digitalRead(13) == 1 && digitalRead(12) == 0) {
go_nazad();
delay(65);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(2, LOW);
digitalWrite(4, HIGH);
delay(190);
Serial.println("4");
}
}
