
void setup() {







    lcd.begin(16, 2);
// lcd.begin(9600);
 lcd.println(":ENERGY MONTER: ");
 delay(1000);
 lcd.println(":150624,150615 ");
  

  dht.begin();


   Serial.begin(9600);
  Serial.println("Initializing Card");
  pinMode(CS_PIN, OUTPUT);
  if (!SD.begin(CS_PIN)) {
    Serial.println("Card Failure");
    return;
  }
  Serial.println("Card Ready");
  
  File commandFile = SD.open("speed.txt");
  if (commandFile) {
    Serial.println("Reading Command File");
    while(commandFile.available()) {
      refreshrate = commandFile.parseInt();
    }
    commandFile.close();
  }
  else {
    Serial.println("Could not read command file.");
    return;
  }
 
BT.begin(9600); 
  
}

