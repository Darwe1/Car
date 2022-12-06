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



void dont_go(int t = 5) {
  digitalWrite(10, LOW);
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  delay(t);
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(7,LOW);
}



void loop()
{
  if(digitalRead(11) == 1)
  {
    digitalWrite(10, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(7,LOW);
  }
  else{
    digitalWrite(10, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, HIGH);
  }
  if (digitalRead(13) == 0 && digitalRead(12) == 1) {
    dont_go(10);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    delay(70);
    dont_go();
    digitalWrite(7,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    delay(50);
    dont_go();
    digitalWrite(5,LOW);
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
    dont_go(20);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    delay(50);
    dont_go(20);
    digitalWrite(7,LOW);
    digitalWrite(10, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(50);
    dont_go(20);
    Serial.println("3");
  }
  if (digitalRead(13) == 1 && digitalRead(12) == 0) {
    dont_go();
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    delay(70);
    dont_go();
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay(50);
    dont_go();
    digitalWrite(6,LOW);
    Serial.println("4");
  }
}
