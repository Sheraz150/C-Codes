void scard()
{
     File dataFile = SD.open("speed.txt", FILE_WRITE);
  if (dataFile) {
    dataFile.print("\n HUMDITY  =  ");
    Serial.print("\n HUMDITY  =  ");
    dataFile.print(h);
    Serial.print(h);
    Serial.print("\nTEMPERATURE  = ");
    Serial.print(t);
    dataFile.print("\nTEMPERATURE  = ");
    dataFile.print(t);
    dataFile.println("C");
    Serial.print("\n Heat Index = ");
    Serial.print(hic);
    dataFile.print("\n Heat Index =");
    dataFile.print(hic);
  Serial.print("\n VOltage = ");
    Serial.print(val2);
      dataFile.print("\n voltage ;");
    dataFile.print(val2);
      Serial.print("\n current = ");
    Serial.print(Amps);
    dataFile.print("\n Current");
    dataFile.print(Amps);



    
        Serial.print("\n\n\n");
        dataFile.print("\n\n\n");


        
    dataFile.close();
    
  }
  
  else {
    Serial.println("Couldn't open log file");
  }
  delay(refreshrate);
}
