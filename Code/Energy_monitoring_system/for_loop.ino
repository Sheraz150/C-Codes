
void loop() {
sensor();
voltage();
current();
liqcd();
scard();
gsm();

  BT.print(" -- ");
  BT.println(Amps);
  
}

