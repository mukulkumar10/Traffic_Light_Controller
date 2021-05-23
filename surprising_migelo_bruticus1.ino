int GREEN1 = 0;
int YELLOW1 = 1;
int RED1 = 2;
int GREEN2 = 5;
int YELLOW2 = 4;
int RED2 = 3;

void setup()
{
  pinMode(GREEN1, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(YELLOW2, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(GREEN2, OUTPUT);
}

void loop()
{
  digitalWrite(GREEN1, HIGH);
  digitalWrite(YELLOW1, LOW);
  digitalWrite(RED1, LOW);
  digitalWrite(GREEN2,LOW);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2,HIGH);
  delay(15000); // Wait for 15 second(s)
  digitalWrite(GREEN1, LOW);
  digitalWrite(YELLOW1, HIGH);
  digitalWrite(RED1, LOW);
  digitalWrite(GREEN2,LOW);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2,HIGH);
  delay(2000); // Wait for 2 second(s)
  digitalWrite(GREEN1, LOW);
  digitalWrite(YELLOW1, LOW);
  digitalWrite(RED1, HIGH);
  digitalWrite(GREEN2,HIGH);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2,LOW);
  delay(15000); // Wait for 15 second(s)
 digitalWrite(GREEN1, LOW);
  digitalWrite(YELLOW1, LOW);
  digitalWrite(RED1, HIGH);
  digitalWrite(GREEN2,LOW);
  digitalWrite(YELLOW2, HIGH);
  digitalWrite(RED2,LOW);
  delay(2000); // Wait for 2 second(s)
}