// Fichier Point1.cpp
// Définition des fonctions membres de la classe Point.
// #include <iostream.h> utilisé pour windows
#include <iostream>
using namespace std;
#include <Point1.h>
Point::Point(float a, float b) { setPoint(a, b); }
void Point::setPoint(float a, float b){x = a;y = b;}
void Point::afficher() const { cout << "[" << x << ", " << y << "]"; }
ostream &operator<<(ostream &output, const Point &p){p.afficher(); 
// Affichage de l’objet à l’écran return  
output;  
//  Autorise  la  concaténation  des  données  à afficher
    
}
