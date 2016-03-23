void schrijfA(){
    double b = breedte / 2;
    double h = sqrt(hoogte * hoogte + (b * b));
    double hoek = 90 - asin(hoogte / h) / pi * 180;
    draaiRechts(hoek);
    voorUit(h);
    hoek = 180 - (asin(b / h) / pi * 180 * 2);
    draaiRechts(hoek);
    voorUit(h);
    penOmhoog();
    draaiRechts(180);
    voorUit(h / 2);
    hoek = asin(hoogte / h) / pi * 180;
    draaiLinks(hoek);
    penNaarBeneden();
    voorUit(breedte / 2);
    penOmhoog();
    draaiRechts(180);
    voorUit(breedte / 2);
    draaiRechts(90);
    voorUit(hoogte / 2);  
}

void schrijfB(){
  voorUit(hoogte);
  draaiRechts(90);
  int omtrekHalveCirkel = ((hoogte/2) * pi)/2;
  int diameterHalveCirkel = hoogte/2;
  int lengteBocht = omtrekHalveCirkel / 10;

  for(int i = 0; i < 10; i++){
    draaiRechts(18);
    voorUit(lengteBocht);
  }
  penOmhoog();
  draaiLinks(180);
  penNaarBeneden();
  for(int i = 0; i < 10; i++){
    draaiRechts(18);
    voorUit(lengteBocht);
  }
  penOmhoog();
  draaiLinks(180);
  voorUit(breedte);
  draaiRechts(90);
}

void schrijfC(){
  int AantalGraden = 90; // Kwart Cirkel
  int AantalStappen = 5;
  double OmtrekKwartCirkel = (hoogte * pi) / 4; //78.53981634 mm
  double LengteRijden = OmtrekKwartCirkel / breedteLetters * 10; //15,70796327 mm
  double GradenDraaien = AantalGraden / AantalStappen; // 18 Graden
  
  //Pen moet omhoog zijn
  penOmhoog();
  draaiRechts(90);
  voorUit(breedteLetters);
  draaiLinks(90); //Robot neemt positie in voor het schrijven
  voorUit(hoogteLetters);
  draaiLinks(90);
  //Pen gaat naar Beneden
  penNaarBeneden();
  
  for(int i=0; i<AantalStappen; i++)
  {
  draaiLinks(GradenDraaien);
  voorUit(LengteRijden);
  } 
  for(int i=0; i<AantalStappen; i++)
  {
  draaiLinks(GradenDraaien);
  voorUit(LengteRijden);
  }
}

void schrijfD(){
  voorUit(hoogte);
  draaiRechts(90);
  int omtrekHalveCirkel = ((hoogte * pi)/2);
  int lengteBocht = omtrekHalveCirkel / 20;

  for(int i = 0; i < 25; i++){
    draaiRechts(9);
    voorUit(lengteBocht);
  }

  penOmhoog();
  draaiRechts(180);
  voorUit(breedte + 10);
}

void schrijfE(){
  delay(100);
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
  voorUit(hoogte/2); 
  draaiLinks(90);
  voorUit(breedte);
  draaiRechts(90);
}

void schrijfF(){
  voorUit(hoogte);
  penOmhoog();
  draaiRechts(90);
  penNaarBeneden();
  voorUit(breedte);
  penOmhoog();
  draaiRechts(90);
  voorUit((hoogte/2));
  penOmhoog(); 
  draaiRechts(90);
  penNaarBeneden();
  voorUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit((hoogte/2));
  draaiLinks(90);
  voorUit(breedte);
  draaiRechts(90);
  penNaarBeneden();
}

void schrijfG(){
    int AantalGraden = 90; // Kwart Cirkel
    int AantalStappen = 5;
    double OmtrekKwartCirkel = (hoogte * pi) / 4; //78.53981634 mm
    double LengteRijden = OmtrekKwartCirkel / breedteLetters * 10; //15,70796327 mm
    double GradenDraaien = AantalGraden / AantalStappen; // 18 Graden

    penOmhoog();
    //Pen moet omhoog zijn
    draaiRechts(90);
    voorUit(breedteLetters);
    draaiLinks(90); //Robot neemt positie in voor het schrijven
    voorUit(hoogteLetters);
    draaiLinks(90);
    //Pen gaat naar Beneden
    penNaarBeneden();

    for(int i=0; i<AantalStappen; i++)
    {
        draaiLinks(GradenDraaien);
        voorUit(LengteRijden);
    }
    for(int i=0; i<AantalStappen; i++)
    {
        draaiLinks(GradenDraaien);
        voorUit(LengteRijden);
    }

    draaiLinks(90);
    voorUit(hoogte / 2);
    draaiLinks(90);
    voorUit(breedte / 2);

    penOmhoog();
    draaiLinks(180);
    voorUit(breedte/2);
    draaiRechts(90);
    voorUit(hoogte/2);
    draaiLinks(90);
} 

void schrijfH(){
  voorUit(hoogte);
  penOmhoog();
  draaiLinks(180);
  voorUit((hoogte/2));
  draaiLinks(90);
  penNaarBeneden();
  voorUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit((hoogte/2));
  draaiLinks(180);
  penNaarBeneden();
  voorUit(hoogte);
}

void schrijfI(){
  double b = breedte/2;
  double c = breedte/4;
  penNaarBeneden();
  voorUit(b);
  achterUit(c);
  draaiLinks(90);
  voorUit(hoogte);
  draaiLinks(90);
  voorUit(c);
  achterUit(b);
  penOmhoog();
  draaiLinks(90);
  voorUit(hoogte);
  draaiLinks(90);
  
}

void schrijfJ()
{
  int AantalGraden = 90; // Kwart Cirkel

int AantalStappen = 5;
double OmtrekKwartCirkel = (hoogte * pi) / 4; //78.53981634 mm
double LengteRijden = OmtrekKwartCirkel / breedteLetters * 10; //15,70796327 mm
double GradenDraaien = AantalGraden / AantalStappen; // 18 Graden

//Pen moet omhoog zijn
penOmhoog();
draaiRechts(90);
voorUit(breedteLetters);
draaiLinks(90); //Robot neemt positie in voor het schrijven
voorUit(hoogteLetters);
draaiLinks(90);
//Pen gaat naar Beneden
penNaarBeneden();

for(int i=0; i<AantalStappen; i++)
{
draaiLinks(GradenDraaien);
voorUit(LengteRijden);
} 
for(int i=0; i<AantalStappen; i++)
{
draaiLinks(GradenDraaien);
voorUit(LengteRijden);
}
voorUit(hoogteLetters);
draaiLinks(AantalGraden);
voorUit(breedteLetters);
penOmhoog();
draaiLinks(180);
voorUit(breedteLetters);
draaiRechts(90);
voorUit(hoogteLetters);
}

void schrijfK(){
  voorUit(hoogte);
  penOmhoog();
  draaiRechts(180);
  voorUit(hoogte);
  draaiLinks(90);
  voorUit(breedte);
  draaiRechts(180);
  penNaarBeneden();

  double b = hoogte / 2;
  double h = sqrt(breedte * breedte + (b * b));
  double hoek = 90 - asin(breedte / h) / pi * 180;
  draaiRechts(hoek);
  voorUit(h);
  hoek = 180 - (asin(b / h) / pi * 180 * 2);
  draaiRechts(hoek);
  voorUit(h);
  penOmhoog();
  draaiRechts(180);
  voorUit(h);
  hoek = asin(hoogte / h) / pi * 180;
  draaiLinks(hoek);
  voorUit(hoogte / 2);
  draaiLinks(90);
  voorUit(breedte);
}

void schrijfL(){
  delay(100);
  penOmhoog();
  voorUit(hoogte);
  draaiRechts(180);
  penNaarBeneden();
  voorUit(hoogte);
  draaiLinks(90);
  voorUit(breedte);
  penOmhoog();
  draaiRechts(90);
}

void schrijfN(){
  double afstand = sqrt(hoogte*hoogte + breedte);// de afstand van de middelste poot dmv pythagoras
  double h = atan(breedte/hoogte)/pi*180; //hoek ten opzichte van de Npoot
  double hoek = 180 - h;
  draaiLinks(90);
  voorUit(hoogte);
  draaiRechts(hoek);
  voorUit(afstand);
  draaiLinks(hoek);
  voorUit(hoogte);
  penOmhoog();
  achterUit(hoogte);
  draaiRechts(90);
  
}


void schrijfO(){
int AantalGraden = 90; // Kwart Cirkel
int AantalStappen = 5;
double StraalCirkel = breedteLetters / 2; //25mm
double LengteU = hoogteLetters - StraalCirkel;
double HalfLengteU = hoogteLetters - StraalCirkel - StraalCirkel; //50mm
double OmtrekkwartCirkel = (breedteLetters * pi) /4; //39.26990817mm
double LengteRijden = OmtrekkwartCirkel / breedteLetters * 10; //7.853981634mm
double GradenDraaien = AantalGraden / AantalStappen; // 18 graden

//Pen moet omhoog zijn
penOmhoog();
voorUit(StraalCirkel);
penIsLaag = false;
penNaarBeneden();
voorUit(LengteU);

for(int i=0; i<=AantalStappen; i++)
{
draaiRechts(GradenDraaien);
voorUit(LengteRijden);
} 
for(int i=0; i<=AantalStappen; i++)
{
draaiRechts(GradenDraaien);
voorUit(LengteRijden);
}

voorUit(HalfLengteU);

for(int i=0; i<=AantalStappen; i++)
{
draaiRechts(GradenDraaien);
voorUit(LengteRijden);
} 
for(int i=0; i<=AantalStappen; i++)
{
draaiRechts(GradenDraaien);
voorUit(LengteRijden);
}

penOmhoog();
draaiLinks(90);
voorUit(breedteLetters);
draaiRechts(90);
voorUit(StraalCirkel);

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
  draaiRechts(45);
  voorUit(h);
  draaiRechts(45);
  voorUit(afstand);
  draaiRechts(45);
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
  penNaarBeneden();
  voorUit((hoogte/2));
  penOmhoog();
  draaiRechts(90);
  penNaarBeneden();
  voorUit(breedte);
  double graden = tan((hoogte/2)/breedte);
  penOmhoog();
  draaiLinks(180);
  draaiRechts(45); // deze waarde is niet goed
  penNaarBeneden();
  double a = (hoogte*hoogte)+(breedte*breedte); // hoogte^2 == hoogte*hoogte
  double afstand = sqrt(a);
  voorUit(afstand);
}


void schrijfT(){
  double b = breedte/2;
  voorUit(b);
  draaiLinks(90);
  voorUit(hoogte);
  draaiLinks(90);
  voorUit(b);
  achterUit(breedte);
  penOmhoog();
  draaiLinks(90);
  voorUit(hoogte);
  draaiLinks(90);
}

void schrijfU(){
int AantalGraden = 90; //Kwart Cirkel
int AantalStappen =5;
double StraalCirkel = breedteLetters /2; //25mm
double LengteU = hoogteLetters - StraalCirkel;
double OmtrekkwartCirkel = (breedteLetters * pi) / 4; // 39.26990817mm
double LengteRijden = OmtrekkwartCirkel / breedteLetters * 10; //7.853981634mm
double GradenDraaien = AantalGraden / AantalStappen; // 18 graden

//Pen moet omhoog zijn
penOmhoog();
voorUit(hoogteLetters); // Positie innemen
draaiRechts(180);
penNaarBeneden();
voorUit(LengteU);

for(int i=0; i<AantalStappen; i++)
{
draaiLinks(GradenDraaien);
voorUit(LengteRijden);
} 
for(int i=0; i<AantalStappen; i++)
{
draaiLinks(GradenDraaien);
voorUit(LengteRijden);
}

voorUit(LengteU);
penOmhoog();
draaiLinks(180);
voorUit(hoogteLetters);
}



void schrijfV(){
    double b = breedte / 2;
    double h = sqrt(hoogte * hoogte + (b * b));
    double hoek = 90 - asin(hoogte / h) / pi * 180;
    Serial.println(penIsLaag);
    penOmhoog();
    voorUit(hoogte);
    draaiRechts(90);
    voorUit(breedte);
    draaiRechts(90);
    draaiRechts(hoek);
    Serial.println(penIsLaag);
    penIsLaag = false;
    penNaarBeneden();
    Serial.println(penIsLaag);
    voorUit(h);
    hoek = 180 - (asin(b / h) / pi * 180 * 2);
    draaiRechts(hoek);
    voorUit(h);
    penOmhoog();
    draaiRechts(180);
    voorUit(h);
    hoek = asin(hoogte / h) / pi * 180;
    draaiLinks(hoek);
    voorUit(breedte / 2);
    draaiRechts(90);
}

void schrijfW(){
  penNaarBeneden();
  voorUit(hoogte); 
  double poot = sqrt(pow(hoogte, 2) + pow((breedte/3), 2));
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

void schrijfMiddel() {
  voorUit(20);
  draaiLinks(20);
  voorUit(20);
  draaiRechts(20);
  voorUit(60);
  draaiRechts(90);
  voorUit(20);
  draaiRechts(90);
  voorUit(40);
  penOmhoog();
  draaiRechts(180);
  voorUit(40);
  penNaarBeneden();
  draaiRechts(90);
  voorUit(20);
  draaiRechts(90);
  voorUit(40);
  penOmhoog();
  draaiRechts(180);
  voorUit(40);
  penNaarBeneden();
  voorUit(40);
  draaiRechts(90);
  voorUit(20);
  draaiRechts(90);
  voorUit(80);
  penOmhoog();
  draaiRechts(180);
  voorUit(40);
  draaiRechts(90);
  penNaarBeneden();
  voorUit(20);
  draaiRechts(90);
  voorUit(40);
  draaiRechts(180);
  voorUit(10);
  draaiRechts(90);
  voorUit(20);
  draaiRechts(90);
  voorUit(30);
  draaiRechts(20);
  voorUit(20);
  draaiLinks(20);
  voorUit(20);
}




