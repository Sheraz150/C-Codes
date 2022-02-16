void liqcd(){
  lcd.setCursor(0,0); 
  lcd.print("Humadity:  ");
 lcd.print(h);
   delay(1000);
  lcd.print("    \t  ");
   lcd.setCursor(0,1); 
  lcd.print("Temp:");
  lcd.print(t);
  lcd.print(" *C:         ");
   delay(1000);
  lcd.setCursor(0,0); 
 lcd.print("Heat index:");
 lcd.print(hic);
  lcd.print("*C:        ");
  delay(1000);
   lcd.setCursor(0,0); 
 lcd.print("Voltage =:");
 lcd.print(val2);
  lcd.print("V:     ");
    lcd.setCursor(0,1); 
  lcd.print("Current :");
  lcd.print(Amps);
  lcd.print(" A:   ");
   delay(100);
 lcd.setCursor(0,8);

  
  
  
  }
