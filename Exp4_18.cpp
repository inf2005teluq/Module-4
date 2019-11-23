// Fichier Rectangle1.cpp
// Définition des fonctions membres de la classe Rectangle// #include <iostream.h> à utiliser pour windows
// #include <iomanip.h> à utiliser pour windows
#include <iostream>
using namespace std;
#include <iomanip>#include <Rectangle1.h>Rectangle::Rectangle(float a, float b){longueur=a, largeur=b;} 
// Appel du constructeur de la classe de base
float Rectangle::aire() const { return longueur*largeur; }
void Rectangle::afficher() const {cout << "["<< getlongueur() << ", " << getlargeur()<< "]";}
ostream &operator<<(ostream &output, const Rectangle &r){r.afficher();
// Affichage de l’objet à l’écran
return 
output;
// Autorise concaténation lors de l’affichage
    
}
