// Utilisation du pointeur this pour faire appel à des membres d’un objet
// #include <iostream.h> sans .h avec linux
#include <iostream>
using namespace std; 
// nécessaire si Linux// #include <conio.h> nécessaire si Windows
class Afficheur{public:Afficheur (int = 0); // Constructeur par défaut
void afficheruneTension () const;
private:int uneTension;}; 
Afficheur::Afficheur(int a) { uneTension = a; } 
// Constructeur
void Afficheur::afficheruneTension () const{cout << " uneTension = " << uneTension << endl<< " this-> uneTension = " << this-> uneTension << endl<< " (*this). uneTension = " << (*this). uneTension << endl;}int main (){Afficheur autreTension (120);autreTension.afficheruneTension();
// getch(); pas nécessaire si Linux
return 0;}
