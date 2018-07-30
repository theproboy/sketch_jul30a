

  //Blinking
  const int LED = 13;//LED connected to
                    //digital pin 13
                    
void setup()
{
  pinMode(LED, OUTPUT);   // sets the digital
  
}
void loop()
{
  digitalWrite(LED, LOW);   //turns the LED off
  
  delay(10000);               //waits for a second
  digitalWrite(LED, HIGH);    //turns the LED on
  delay(1000);               //waits for a second
}
  

