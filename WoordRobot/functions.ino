void voorUit(double afstand){ //afstand in mm, vooruit is high
  double aantalRonden = afstand/(diameterWiel*pi);
//  Serial.println(aantalRonden);
  double tijd = aantalRonden * tijdEenRondjeMaxSnelheid;
//  Serial.println(tijd);
  digitalWrite (4, HIGH);
  digitalWrite (7, HIGH);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  delay(tijd);

  //de onderstaande code omdat de robot anders doorgleid...
  digitalWrite (4, LOW);
  digitalWrite (7, LOW);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  delay(20);

  
  analogWrite (5, 0);
  analogWrite (6, 0);
}

void achterUit(double afstand){ //afstand in mm, vooruit is high
  double aantalRonden = afstand/(diameterWiel*pi);
//  Serial.println(aantalRonden);
  double tijd = aantalRonden * tijdEenRondjeMaxSnelheid;
//  Serial.println(tijd);
  digitalWrite (4, LOW);
  digitalWrite (7, LOW);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  delay(tijd);

  //de onderstaande code omdat de robot anders doorgleid...
  digitalWrite (4,  HIGH);
  digitalWrite (7, HIGH);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  delay(20);


  analogWrite (5, 0);
  analogWrite (6, 0);
}

void draaiLinks(double aantalGraden){
    double afstand = (aantalGraden/360) * 2 * pi * afstandStiftWiel;
//    Serial.print("Afstand: ");
//    Serial.println(afstand);
    double aantalRonden = afstand/(diameterWiel*pi);
//    Serial.print("Aantal ronden: ");
//    Serial.println(aantalRonden);
    double tijd = aantalRonden * tijdEenRondjeMaxSnelheid;
//    Serial.println(tijd);
    digitalWrite (4, LOW);
    digitalWrite (7, HIGH);
    analogWrite(5, snelheid - afwijkingLinks);
    analogWrite(6, snelheid - afwijkingRechts);
    delay(tijd);

    //de onderstaande code omdat de robot anders doorgleid...
    digitalWrite (4, HIGH);
    digitalWrite (7, LOW);
    analogWrite(5, snelheid - afwijkingLinks);
    analogWrite(6, snelheid - afwijkingRechts);
    delay(20);
  
    analogWrite (5, 0);
    analogWrite (6, 0);
}

void draaiRechts(double aantalGraden){
    double afstand = (aantalGraden/360) * 2 * pi * afstandStiftWiel;
//    Serial.print("Afstand: ");
//    Serial.println(afstand);
    double aantalRonden = afstand/(diameterWiel*pi);
//    Serial.print("Aantal ronden: ");
//    Serial.println(aantalRonden);
    double tijd = aantalRonden * tijdEenRondjeMaxSnelheid;
//    Serial.println(tijd);
    digitalWrite (4, HIGH);
    digitalWrite (7, LOW);
    analogWrite(5, snelheid - afwijkingLinks);
    analogWrite(6, snelheid - afwijkingRechts);
    delay(tijd);

     //de onderstaande code omdat de robot anders doorgleid...
    digitalWrite (4, LOW);
    digitalWrite (7, HIGH);
    analogWrite(5, snelheid - afwijkingLinks);
    analogWrite(6, snelheid - afwijkingRechts);
    delay(20);
    
    analogWrite (5, 0);
    analogWrite (6, 0);
}

void penNaarBeneden(){
  delay(250);
  if(penIsLaag != true){
    Serial.println("Down");
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    analogWrite(11, 255);
    delay(100);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    analogWrite(11, 255);
    delay(5);
    analogWrite(11, 0);
    penIsLaag = true;
  }
  delay(250);
}

void penOmhoog(){
  delay(250);
  if(penIsLaag == true){
    Serial.println("Up");
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    analogWrite(11, 255);
    delay(100);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    analogWrite(11, 255);
    delay(5);
    analogWrite(11, 0);
    penIsLaag = false;
  }
  delay(250);
}

void wachtOpButton(){
   // button uitlezen of er begonnen mag worden
  int sensorVal = digitalRead(26);
  while(sensorVal == HIGH){
    Serial.println("De button is niet ingedrukt.");
    //checken of button ingedrukt is
    sensorVal = digitalRead(26);
  }
}

boolean readSensorLinks(){
  Serial.println(analogRead(SENSOR_LINKS));
  if(analogRead(SENSOR_LINKS) < bijDezeWaardeIsSensorZwart){
   return true; 
  }else{
    return false;
  }
}

boolean readSensorRechts(){
  Serial.println(analogRead(SENSOR_RECHTS));
  if(analogRead(SENSOR_RECHTS) < bijDezeWaardeIsSensorZwart){
   return true; 
  }else{
    return false;
  }
}

boolean readSensorMidden(){
  Serial.println(analogRead(SENSOR_MIDDEN));
  if(analogRead(SENSOR_MIDDEN) < bijDezeWaardeIsSensorZwart){
   return true; 
  }else{
    return false;
  }
}

boolean readSensorMiddenVoor(){
  Serial.println(analogRead(SENSOR_MIDDEN_VOOR));
  if(analogRead(SENSOR_MIDDEN_VOOR) < bijDezeWaardeIsSensorZwart){
   return true; 
  }else{
    return false;
  }
}

boolean readSensorMiddenAchter(){
  Serial.println(analogRead(SENSOR_MIDDEN_ACHTER));
  if(analogRead(SENSOR_MIDDEN_ACHTER) < bijDezeWaardeIsSensorZwart){
   return true; 
  }else{
    return false;
  }
}

void zetRecht(){
  digitalWrite (4, HIGH);
  digitalWrite (7, HIGH);
  boolean recht = false;
  while(recht !=true ){
    Serial.println("Ik ben aan het rechtzetten!");
    if(readSensorRechts()){
      // rechter wiel laten draaien
      analogWrite(6, snelheid - afwijkingRechts);
      Serial.println("Sensor rechts true");
    } else {
      analogWrite(6, 0);
      Serial.println("Sensor rechts false");
    }
    if(readSensorLinks()){
      // linker wiel draaien
      analogWrite(5, snelheid - afwijkingLinks);
      Serial.println("Sensor links true");
    } else {
      analogWrite(5, 0);
      Serial.println("Sensor links false");
    }
    if(!readSensorRechts() && !readSensorLinks()){
      recht = true;
      digitalWrite (4, LOW);
      digitalWrite (7, LOW);
      analogWrite(5, snelheid - afwijkingLinks);
      analogWrite(6, snelheid - afwijkingRechts);
      delay(10);
      analogWrite(6,0);
      analogWrite(5,0);
    }
  }
  Serial.println("Ik sta recht");
}

void zetRechtAchterUit(){
  digitalWrite (4, LOW);
  digitalWrite (7, LOW);
  boolean recht = false;
  while(recht !=true ){
    Serial.println("Ik ben aan het rechtzetten!");
    if(readSensorRechts()){
      // rechter wiel laten draaien
      analogWrite(6, snelheid - afwijkingRechts);
      Serial.println("Sensor rechts true");
    } else {
      analogWrite(6, 0);
      Serial.println("Sensor rechts false");
    }
    if(readSensorLinks()){
      // linker wiel draaien
      analogWrite(5, snelheid - afwijkingLinks);
      Serial.println("Sensor links true");
    } else {
      analogWrite(5, 0);
      Serial.println("Sensor links false");
    }
    if(!readSensorRechts() && !readSensorLinks()){
      recht = true;
      digitalWrite (4, LOW);
      digitalWrite (7, LOW);
      analogWrite(5, snelheid - afwijkingLinks);
      analogWrite(6, snelheid - afwijkingRechts);
      delay(10);
      analogWrite(6,0);
      analogWrite(5,0);
    }
  }
  Serial.println("Ik sta recht");
}

boolean checkOfLijnIsSmal(){
  digitalWrite (4,  HIGH);
  digitalWrite (7, HIGH);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  while(readSensorMiddenAchter()){
    Serial.println("Sensor achter is nog wit....");
  }
  analogWrite(5,0);
  analogWrite(6,0);
  //sensoren na checken.
  if(!readSensorMiddenAchter() && !readSensorMidden() && readSensorMiddenVoor() && readSensorRechts() && readSensorLinks()){
    return true;
  } else {
    return false; 
  }
}

void zoekBeginPunt(){  
  boolean dunnelijngevonden = false;
  int teller = 0;
  while(!dunnelijngevonden){
      zetRecht();
      draaiLinks(180);
      voorUit(50);
      zetRechtAchterUit();
      teller++;
      boolean check = checkOfLijnIsSmal();
      if(check){
        Serial.println("Dit is een dunne lijn!");
        dunnelijngevonden = true;
      } else {
        voorUit(150);
        Serial.println("Dit is een dikke lijn!");
          if(teller==2){
            draaiLinks(90);
            teller = 0;
          }
      }
  }
  voorUit(50);
  draaiLinks(90);
  zetRecht();
  draaiLinks(180);
  zetRechtAchterUit();
  voorUit(120);
  draaiRechts(90);
  zetRecht();
  draaiLinks(180);
  voorUit(50);
  zetRechtAchterUit();
}

void voorUitMetDisplay(double afstand, int getal){
    double aantalRonden = afstand/(diameterWiel*pi);
//  Serial.println(aantalRonden);
  double tijd = aantalRonden * tijdEenRondjeMaxSnelheid;
//  Serial.println(tijd);
  digitalWrite (4, HIGH);
  digitalWrite (7, HIGH);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  tijd = tijd + millis();
  unsigned long time = millis();
  Serial.println(tijd);
  while(time < tijd){
    Serial.println(time);
    switch (getal) {
      case 1:
        writeEen();
      break;
      case 2:
        writeTwee();
      break;
      case 3:
        writeDrie();
      break;
      case 4:
        writeVier();
      break;
      case 5:
        writeVijf();
      break;
      case 6:
        writeZes();
      break;
      case 7:
        writeZeven();
      break;
      case 8:
        writeAcht();
      break;
      case 9:
        writeNegen();
      break;
      default: 
        writeNul();
      break;
    }
    time = millis();
  }

  // display uit

  digitalWrite(gnd1, HIGH);
  digitalWrite(gnd2, HIGH);
   
  //de onderstaande code omdat de robot anders doorgleid...
  digitalWrite (4, LOW);
  digitalWrite (7, LOW);
  analogWrite(5, snelheid - afwijkingLinks);
  analogWrite(6, snelheid - afwijkingRechts);
  delay(20);

  
  analogWrite (5, 0);
  analogWrite (6, 0);
}



