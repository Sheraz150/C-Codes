void current()
{
  
   RawValue = analogRead(analogIn);
 Voltage = (RawValue / 1023.0) * 5000; // Gets you mV
 Amps = ((Voltage - ACSoffset) / mVperAmp);
 
Serial.print("\n current =");
 Serial.println(Amps); // the '3' after voltage allows you to display 3 digits after decimal point
 delay(2500); 
 
  
  }
