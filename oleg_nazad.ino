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
  go_nazad();
}
