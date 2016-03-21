void schrijfA(){
  voorUit(hoogte);
  draaiRechts(90);
  voorUit(breedte);
  draaiRechts(90);
  voorUit(hoogte/2);
  draaiRechts(90);
  voorUit(breedte);
  draaiRechts(180);
  voorUit(breedte);
  draaiLinks(90);
  voorUit(hoogte/2);
}



void schrijfD(){
  voorUit(hoogte);
  draaiRechts(90);

  double omtrekHalveCirkel = (hoogte * pi)/2;
  double lengteBochtjes = omtrekHalveCirkel / 20;
  double hoeveelheidGradenPerBocht = 180 / omtrekHalveCirkel * lengteBochtjes;
  Serial.println(omtrekHalveCirkel);
  Serial.println(lengteBochtjes);
  Serial.println(hoeveelheidGradenPerBocht);
  for(int i = 0; i < omtrekHalveCirkel; i + lengteBochtjes){
    voorUit(lengteBochtjes);
    draaiRechts(hoeveelheidGradenPerBocht);
  }


  //De halve cirkel is 15,707963267948966192313216916398 cm lang.
  //De diameter is 10 cm.
  
}

void schrijfE(){
  penOmhoog();
  voorUit(hoogte);
  draaiRechts(90);
  voorUit(breedte);
  draaiRechts(180);
  penNaarBeneden();
  voorUit(breedte);
  draaiLinks(90);
  voorUit(hoogte);
  draaiLinks(90);
  voorUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit(hoogte/2);
  draaiLinks(90);
  penNaarBeneden();
  voorUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit(breedte);
  draaiRechts(90);
  voorUit(breedte);
  draaiRechts(90); 
}

void schrijfF(){
  voorUit(hoogte);
  penOmhoog();
  draaiRechts(90);
  penNaarBedneden();
  voorUit(breedte);
  penOmhoog();
  draaiRechts(90);
  voorUit((hoogte/2));
  penOmhoog(); 
  draaiRechts(90);
  penNaarBedneden();
  voorUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit((hoogte/2));
  draaiLinks(90);
  voorUit(breedte);
  draaiRechts(90);
  penNaarBedneden();
}

void schrijfH(){
  voorUit(hoogte);
  penOmhoog();
  draaiLinks(180);
  voorUit((hoogte/2));
  draaiLinks(90);
  penNaarBedneden();
  voorUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit((hoogte/2));
  draaiLinks(180);
  penNaarBedneden();
  voorUit(hoogte);
}

void schrijfK(){
  voorUit(hoogte);
  penOmhoog();
  draaiRechts(180);
  voorUit(hoogte/2);
  draaiLinks(135);
  penNaarBedneden();
  
  double diagonaal = sqrt( pow(breedte, 2) + pow((hoogte/2), 2));
  voorUit(diagonaal);
  penOmhoog();
  draaiRechts(180);
  voorUit(diagonaal);
  draaiLinks(90);
  penNaarBedneden();
  voorUit(diagonaal);
}

void schrijfL(){
  penOmhoog();
  voorUit(hoogte);
  draaiRechts(180);
  penNaarBeneden();
  voorUit(hoogte);
  draaiLinks(90);
  voorUit(breedte);
  penOmhoog();
}

void schrijfP(){
  double b = breedte/4;
  double bD = b*3;
  double h = hoogte/4;
  double afstand = sqrt(h*h+b);
  voorUit(hoogte);
  draaiRechts(90);
  voorUit(bD);
  draaiRechts(45);
  voorUit(afstand);
  draaiRechts(135);
  voorUit(h);
  draaiRechts(45);
  voorUit(afstand);
  draaiRechts(135);
  voorUit(bD);
  penOmhoog();
  achterUit(breedte);
  draaiLinks(90);
  voorUit(h);
  
}


void schrijfR(){
  voorUit(hoogte);
  penOmhoog();
  draaiRechts(90);
  penNaarBeneden();
  voorUit(breedte);
  penOmhoog();
  draaiRechts(90);
  penNaarBedneden();
  voorUit((hoogte/2));
  penOmhoog();
  draaiRechts(90);
  penNaarBedneden();
  voorUit(breedte);
  double graden = tan((hoogte/2)/breedte);
  penOmhoog();
  draaiLinks(180);
  draaiRechts(45); // deze waarde is niet goed
  penNaarBedneden();
  double a = (hoogte*hoogte)+(breedte*breedte); // hoogte^2 == hoogte*hoogte
  double afstand = sqrt(a);
  voorUit(afstand);
}

void schrijfW(){
  penNaarBeneden();
  voorUit(hoogte); 
  double poot = sqrt(pow(hoogte, 2) + pow((breedte/3), 2)));
  double hoek = asin((breedte/3) / poot);
  draaiRechts(180 - hoek);
  voorUit(poot);
  draaiLinks(180 - 2 * hoek);
  voorUit(poot);
  draaiRechts(180 - 2 * hoek);
  voorUit(poot);
  draaiLinks(180 - 2 * hoek);
  voorUit(poot);
  penOmhoog();
  draaiRechts(180 - hoek);
  voorUit(hoogte);
}

void schrijfZ(){
 draaiRechts(90);
 voorUit(breedte);
 draaiLinks(180);
 penNaarBeneden();
 voorUit(breedte);
 double diagonaal = sqrt( pow(breedte, 2) + pow(hoogte, 2));
 //in graden
 double hoek = (asin(hoogte/diagonaal) * 57296) / 1000;
 draaiRechts(180 - hoek);
 voorUit(diagonaal);
 draaiLinks(hoek);
 voorUit(breedte);
}
