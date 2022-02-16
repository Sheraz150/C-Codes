int ch1=A5;
int ch2=A4;
int ch3=A3;
int ch4=A2;
int ch5=A1;
int ch6=A0;


int Ch1;
int Ch2;
int Ch3;
int Ch4;
int Ch5;
int Ch6;


void setup() {
  // put your setup code here, to run once:
  pinMode(ch1,INPUT);
  pinMode(ch3,INPUT);
  pinMode(ch2,INPUT);
  pinMode(ch4,INPUT);
  pinMode(ch5,INPUT);
  pinMode(ch6,INPUT);
 Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:

 Ch1 = (pulseIn (ch1, HIGH)); // Checks the value of channel1
 Ch2 = (pulseIn (ch3, HIGH)); // Checks the value of channel1   
 Ch3 = (pulseIn (ch2, HIGH)); // Checks the value of channel1
 Ch4 = (pulseIn (ch4, HIGH)); // Checks the value of channel1   
 Ch5 = (pulseIn (ch5, HIGH)); // Checks the value of channel1
 Ch6 = (pulseIn (ch6, HIGH)); // Checks the value of channel1   
 
   Serial.println ("ch1="); //Prints the channels value on the serial monitor
   Serial.println (Ch1);
   Serial.println ("ch2="); //Prints the channels value on the serial monitor
   Serial.println (Ch2);
   Serial.println ("ch3="); //Prints the channels value on the serial monitor
   Serial.println (Ch3);
   Serial.println ("ch4="); //Prints the channels value on the serial monitor
   Serial.println (Ch4);
   Serial.println ("ch4="); //Prints the channels value on the serial monitor
   Serial.println (Ch5);
   Serial.println ("ch6="); //Prints the channels value on the serial monitor
   Serial.println (Ch6);
   Serial.println (".............................");
   delay(400);
}
