// C++ code
//
int Animation_Speed = 0;

int Hold = 0;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  Animation_Speed = 50;
  Hold = 650;
  delay(Animation_Speed); // Wait for Animation_Speed millisecond(s)
  digitalWrite(0, HIGH);
  delay(Animation_Speed); // Wait for Animation_Speed millisecond(s)
  digitalWrite(1, HIGH);
  delay(Animation_Speed); // Wait for Animation_Speed millisecond(s)
  digitalWrite(2, HIGH);
  delay(Hold); // Wait for Hold millisecond(s)
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
}