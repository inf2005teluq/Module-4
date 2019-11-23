// Fichier Cube1.h
// Définition de la classe Cube
#ifndef CUBE1_H
#define CUBE1_H
#include "Rectangle1.h"class Cube : public Rectangle {friend ostream &operator<<(ostream &, const Cube &);public:
// Constructeur par défaut
Cube(float h = 0.0,float x = 0.0, float y = 0.0);
void setHauteur(float);virtual float aire() const;
virtual float volume() const;
virtual void afficherNomFigures() const { cout << "Cube: "; }virtual void afficher() const;
private:float hauteur; 
// Hauteur de cube
};#endif
// Fichier Cube1.cpp
// Définition des fonctions membres et amies de la classe Cube
// #include <iostream.h> utilisé pour windows
#include <iostream>
#include <iomanip>
using namespace std;
//#include <iomanip.h> à utiliser pour windows
#include <Cube1.h>Cube::Cube(float h, float x, float y): Rectangle(x, y) 
// Appel du constructeur de la classe de base{ setHauteur(h) ; }
void Cube::setHauteur(float h) { hauteur = h ;}
float Cube::aire() const{
    // Aire de Cube
    return 6 * Rectangle::aire() ;}
    float  Cube::volume()  const  {  return  1/6*Rectangle::aire()  * hauteur; }
    void Cube::afficher() const{cout  <<  "["<<  getX()  <<  ",  "  <<  getY()<<  "]"  <<  "Hauteur="  << hauteur;}ostream &operator<<(ostream &output, const Cube& c){
c.afficher(); 
// Affichage de l’objet à l’écran
return output; 
// Autorise la concaténation à l’affichage
}
