// Fichier Rectangle1.h
// Définition de la classe Cercle
#ifndef RECTANGLE1_H
#define RECTANGLE1_H
#include <Point1.h>
class Rectangle : public Point {friend ostream &operator<<(ostream &, const Rectangle &);public:
// Constructeur par défaut
Rectangle(float longueur = 0.0, float largeur = 0.0);
virtual float aire() const;
float getlongueur() const {
  return longueur;
}
float getlargeur() const {
  return largeur;
}
virtual void afficher() const;
virtual void afficherNomFigures() const {
  cout << "Rectangle: ";
}
private: float longueur;
float largeur;
};#
endif
