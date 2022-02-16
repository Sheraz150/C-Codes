void sensor(){
  int sensorReading = analogRead(A0);
//int sensorReading = analogRead(A0)

  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
   h = dht.readHumidity();
 // Read temperature as Celsius (the default)
   t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  int f = dht.readTemperature(true);


  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    lcd.println("Failed to read :" );
    return;
  }

  int hif = dht.computeHeatIndex(f, h);
  hic = dht.computeHeatIndex(t, h, false);

  Serial.print("\n HUMDITY  =  ");
  
    Serial.print(h);
    Serial.print("\nTEMPERATURE  = ");
    Serial.print(t);
 
    Serial.print("\n Heat Index = ");
    Serial.print(hic);
   
  
  }
