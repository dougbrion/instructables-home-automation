#define relay 2    //attaches the relay to pin 2

void setup()
{
  pinMode(relay, OUTPUT);    //sets the relay as an output
}
void loop()
{
  digitalWrite(relay, HIGH);    //relay open
  delay(2000);                  //wait 2 seconds
  digitalWrite(relay, LOW);     //relay closed
  delay(2000);                  //wait 2 seconds
}
