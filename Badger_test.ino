#define LED 13
 void setup()
{
pinMode(LED,OUTPUT);
}
void ledBlink(int times,int delay_time)
{
  for(int x= 0;x<times;x++)
  { 
  digitalWrite(LED,HIGH);
  delay(delay_time);
  digitalWrite(LED,LOW);
  delay(delay_time);
  }
}
 void loop()
 { 
	// this code has been written with pico 
	// and pushed trough terminal
	int time = 8;
	int turns = 2;
	ledBlink(turns,time);
 } 
