#include <stdio.h>
#include <math.h>

const double pi = 3.14159265359;
const double tijdEenRondjeMaxSnelheid = 2100; //miliseconden    dit getal is nog niet goed!
const double diameterWiel = 30.4; //mm
const double afstandStiftWiel = 61; //mm                        dit getal is nog niet goed!
const double hoogteLetters = 100; //mm
const double breedteLetters = 50; //mm
const double afwijkingRechts = 67.8;
const double afwijkingLinks = 0;
const int snelheid =  255; //zo houden
const  int hoogte = 100;
const  int breedte = hoogte/2;
boolean  penIsLaag = true;
const int SENSOR_LINKS = A8;
const int SENSOR_RECHTS = A9;
const int SENSOR_MIDDEN = A10;
const int SENSOR_MIDDEN_VOOR = A11;
const int SENSOR_MIDDEN_ACHTER = A12;
const int bijDezeWaardeIsSensorZwart = 400;

int pin1 = 30;
int pin2 = 32;        //                            --6--
int pin3 = 34;        //                         5 |     | 7
int pin4 = 36;        //                           |--4--|
int pin5 = 38;        //                         1 |     | 3
int pin6 = 40;        //                            --2--
int pin7 = 42;
int gnd1 = 24;        //                          gnd1 is display 1's gnd
int gnd2 = 22;        //                          gnd2 is display 2's gnd

void setup() {
  Serial.begin(9600);

  //motoren
  pinMode(4, OUTPUT); //motor rechts r
  pinMode(5, OUTPUT); //motor rechts snelheid
  pinMode(7, OUTPUT); //motor rechts r
  pinMode(6, OUTPUT); //motor links snelheid
  pinMode(26, INPUT_PULLUP); // voor button
  pinMode(12, OUTPUT); // pen
  pinMode(13, OUTPUT); // pen
  pinMode(11, OUTPUT); // pwm voor penUpDown

  //Sensoren
  pinMode(SENSOR_LINKS, INPUT);
  pinMode(SENSOR_RECHTS, INPUT);
  pinMode(SENSOR_MIDDEN, INPUT);
  pinMode(SENSOR_MIDDEN_VOOR, INPUT);
  pinMode(SENSOR_MIDDEN_ACHTER, INPUT);

  //Segmentendisplay
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(gnd1, OUTPUT);
  pinMode(gnd2, OUTPUT); 
  
  // button uitlezen of er begonnen mag worden
  int sensorVal = digitalRead(26);
  while(sensorVal == HIGH){
    Serial.println("De button is niet ingedrukt.");
    //checken of button ingedrukt is
    sensorVal = digitalRead(26);
  }
}

void loop(){
  penOmhoog();
//  delay(2000);
//  penNaarBeneden();
//  delay(2000);
//  voorUit(100);
  

//draaiLinks(360);
//draaiRechts(360);
  /* Dit van tevoren nog even testen */
//    for(int x = 0;x<100;x++){
//      penNaarBeneden();
//      delay(10);
//      voorUit(40);
//      penOmhoog();
//      delay(10);
//      voorUit(40);
//    }
  /* Dit van tevoren nog even testen */

  
  zoekBeginPunt();
  voorUitMetDisplay(100, 1);
  penNaarBeneden();
  schrijfA();
  
  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(35);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 2);
  penNaarBeneden();
  schrijfP();
  
  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(25);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 3);
  penNaarBeneden();
  schrijfP();
  
  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(25);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 4);
  penNaarBeneden();
  schrijfE();
  
  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(25);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 5);
  penNaarBeneden();
  schrijfL();

  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(25);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 6);
  penNaarBeneden();
  schrijfF();
  
  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(25);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 7);
  penNaarBeneden();
  schrijfL();

  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(25);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 8);
  penNaarBeneden();
  schrijfA();

  penOmhoog();
  zetRecht();
  draaiLinks(90);
  voorUit(35);
  draaiLinks(90);
  voorUit(20);
  zetRechtAchterUit();
  voorUitMetDisplay(100, 9);
  penNaarBeneden();
  schrijfP();
 zoekEindPunt();


  delay(1000000);

}










