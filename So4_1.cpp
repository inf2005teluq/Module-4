#include <iostream>
#include <time.h>
using namespace std;
class Temps {public:Temps();
void setHeure(int h) { heure = (h >= 0 && h < 24) ? h : 0; }
void setMinute(int m) { minute = (m >= 0 && m < 60) ? m : 0; }
void setSecond(int s) { second = (s >= 0 && s < 60) ? s : 0; }
int getHeure(void) { return heure; }
int getMinute(void) { return minute; }
int getSecond(void) { return second; }
void AfficherStandard(void);
private:int heure;
int minute;
int second;};
// définition des fonctions membres de la classe 
TempsTemps::Temps(){long int tempsTotal;    
// Temps en secondes 
// depuis 1970
int AnneeCourante = 1994 -1970;        
// Temps écoulé jusqu’à
// l’année courante
double anneeTotale;    
// Année courante
double jourTotal;       
// Nombre de jours écoulés 
//depuis le début de l’année
double jour;    
// Jour courant
long double facteur;     
// Facteur de conversion
int DecalageHoraire = 7;        
// Le temps retourné par
// la classe Temps() est
// donnée par le nombre
// de secondes écoulées 
// depuis 1/1/70 GMT. Selon 
//la zone, on doitdécaler le 
//temps d’un certain nombre
// horaire est de 7 heures.
tempsTotal = time(NULL);
facteur = (60.0 * 60.0 * 24.0 * 365.0); 
// Nombre total de 
// secondes dans 1 an.
anneeTotale = tempsTotal / facteur -AnneeCourante;
jourTotal = 365 * anneeTotale; 
// Les années bissextiles sont
// ignorées.
jour = jourTotal -(int) jourTotal;
setHeure(jour * 24 + DecalageHoraire);
setMinute((jour * 24 -(int)(jour * 24)) * 60);setSecond((minute * 60 -(int)(minute * 60)) * 60);}void Temps::AfficherStandard(){cout << ((heure % 12 == 0) ? 12 : heure % 12) << ":"<< (minute < 10 ? "0" : "") << minute << ":"<< (second < 10 ? "0" : "") << second<< (heure < 12 ? " AM" : " PM");}
// Programme principal 
main(){  Temps t;t.AfficherStandard();
return 0;
    
}
