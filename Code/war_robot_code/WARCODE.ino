int ch1=A5;
int ch2=A4;

int Ch1;
int Ch2;

int r1=3;   //RED WIRE
int r2=6;   //WHITE WIRE 
int r3=8;  //BROWN WIRE
int r4=10;  //Orange WIRE

void setup() {
  // put your setup code here, to run once:

  pinMode(ch1,INPUT);
  pinMode(ch2,INPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
    digitalWrite(r1,LOW);  
    digitalWrite(r2,LOW);  
    digitalWrite(r3,LOW);  
    digitalWrite(r4,LOW);  
}

void loop() {
  // put your main code here, to run repeatedly:
 Ch1 = (pulseIn (ch1, HIGH)); // Checks the value of channel1
 Ch2 = (pulseIn (ch2, HIGH)); // Checks the value of channel1  

if(Ch2>1300 && Ch2<1700 && Ch1>1300 && Ch1<1700)
{
     digitalWrite(r1,LOW);
     digitalWrite(r2,LOW); 
     digitalWrite(r3,LOW);
     digitalWrite(r4,LOW);  
   
  }
if(Ch2>1700 && Ch2<2000 && Ch1>1300 && Ch1<1700) //FORWARD
{
     digitalWrite(r1,HIGH);
     digitalWrite(r2,LOW); 
     digitalWrite(r3,HIGH);
     digitalWrite(r4,LOW);  
   
  }

if(Ch2>900 && Ch2<1300 && Ch1>1300 && Ch1<1700) //BACKWARD
{
     digitalWrite(r1,LOW);
     digitalWrite(r2,HIGH); 
     digitalWrite(r3,LOW);
     digitalWrite(r4,HIGH);  
   
  }

 
if(Ch2>1300 && Ch2<1700 && Ch1>1700 && Ch1<2000) //RIGHT
{
     digitalWrite(r1,HIGH);
     digitalWrite(r2,LOW); 
     digitalWrite(r3,LOW);
     digitalWrite(r4,HIGH);  
   
  }

 
if(Ch2>1300 && Ch2<1700 && Ch1>900 && Ch1<1300) //RIGHT
{
     digitalWrite(r1,LOW);
     digitalWrite(r2,HIGH); 
     digitalWrite(r3,HIGH);
     digitalWrite(r4,LOW);  
   
  }

}
