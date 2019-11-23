// Surcharge des opérateurs d’insertion/d’extraction
// #include <iostream.h> pour Windows
// #include <conio.h> pour windows pas nécessaire avec linux
#include <iostream>
using namespace std;
class Complexe {public:friend ostream &operator<<(ostream &, const Complexe &);friend istream &operator>>(istream &, Complexe &);private:float imaginaire; // Partie imaginairefloat reel; 
// Partie réelle};
//  Surcharge  de  l’opérateur  d’insertion  (ne  peut  être  une fonction membre).
ostream &operator<<(ostream &sortie, const Complexe &nombreC){sortie << nombreC.reel << " +"<<"i" << nombreC.imaginaire;return sortie; 
// Permet l’opération « cout << a << b »
;}
// Surcharge de l’opérateur d’extraction
istream &operator>>(istream &entree, Complexe &nombreC){entree>> (nombreC.reel); 
// Entrée de la partie réelle
entree>> (nombreC.imaginaire); 
// Entrée de la partie imaginairereturn entree; 
// Permet l’opération 
« cin >> a >> b »;}int main(){Complexe complexe1; 
//Ccréer un objet de type complexe
cout << "Entrez un nombre complexe parties reelle et imaginaire "<< endl;cin >> complexe1; 
// Fait appel à la fonction operator>> par
// l’appel de operator>> 
(cin, complexe1).cout << "Voici le complexe1 :" << endl<< complexe1 << endl; 
// Fait appel à lafonction operator<< par 
// l’appel de operator<<(cout, complexe1).return 0;
    
}
