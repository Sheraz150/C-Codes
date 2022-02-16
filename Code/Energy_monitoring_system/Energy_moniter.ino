// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain
#include <LiquidCrystal.h>
#include <SD.h>
#include <Wire.h>
#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3);
int val11;
int val2;
const int CS_PIN = 10;
int refreshrate = 5000;
#include "DHT.h"

#define DHTPIN A0
// what digital pin we're connected to

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor
float h;
int t,f;
int hic;
// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(5, 6, 7, 8, 9, 4); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

/*
Henry's Bench
ACS758 Current Measurement Tutorial
*/
const int analogIn = A2;

// Set your scale factor
int mVperAmp = 40; // See Scale Factors Below

/* Scale Factors
50A bi-directional = 40
50A uni-directional = 60
100A bi-directional = 20
100A uni-directional = 40
150A bi-directional = 13.3
150A uni-directioal = 26.7
200A bi-directional = 10
200A uni-directional = 20
*/

// Set you Offset
int ACSoffset = 2500; // See offsets below

/* Offsets
If bi-directional = 2500
If uni- directional = 600
*/

int RawValue= 0;
double Voltage = 0;
double Amps = 0;


void scard();
void liqcd();
void sensor(  );
void voltage();
void current();
void gsm();
