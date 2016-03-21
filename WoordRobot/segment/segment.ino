int pin1 = 30;
int pin2 = 32;                                    //                            --6--
int pin3 = 34;                                    //                         5 |     | 7
int pin4 = 36;                                    //                           |--4--|
int pin5 = 38;                                    //                         1 |     | 3
int pin6 = 40;                                    //                            --2--
int pin7 = 42;
int gnd1 = 24;                                 //                          gnd1 is display 1's gnd
int gnd2 = 22;                                   //                          gnd2 is display 2's gnd




void writeL(){
  
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, LOW);
   digitalWrite(gnd2, HIGH);
   delay(10);
   
}


void writeNul() {
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, LOW);
   digitalWrite(gnd2, HIGH);
   delay(10);
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, LOW);
   digitalWrite(gnd2, HIGH);
   delay(10);
}

void writeNegen() {

   writeL();                                       //          Writes L9 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
} 
  
  
void writeAcht() {

   writeL();                                       //          Writes L8 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
   
  }
void writeZeven() {

   writeL();                                       //          Writes L7 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
   
  }
void writeZes() {

   writeL();                                       //          Writes L6 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
  
}
void writeVijf() {

   writeL();                                       //          Writes L5 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B0);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
  
}
void writeVier() {
 
   writeL();                                       //          Writes L4 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B1);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
  
}
void writeDrie() {

   writeL();                                       //          Writes L3 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
  
}
void writeTwee() {

   writeL();                                       //          Writes L2 to the display.
   digitalWrite(pin1, B1);
   digitalWrite(pin2, B1);
   digitalWrite(pin3, B0);
   digitalWrite(pin4, B1);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B1);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
  
}
void writeEen() {

   writeL();                                       //          Writes L2 to the display.
   digitalWrite(pin1, B0);
   digitalWrite(pin2, B0);
   digitalWrite(pin3, B1);
   digitalWrite(pin4, B0);
   digitalWrite(pin5, B0);
   digitalWrite(pin6, B0);
   digitalWrite(pin7, B1);
   digitalWrite(gnd1, HIGH);
   digitalWrite(gnd2, LOW);
   delay(10);
  
  }


void setup(){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);           //The following sets up all of the pins for use.
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(gnd1, OUTPUT);
  pinMode(gnd2, OUTPUT);
  
  

  
 
  
  
}

void loop() {
  
writeNul();

}
