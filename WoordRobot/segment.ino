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
