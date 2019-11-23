// Fichier Point1.h
// Définition de la classe Point
#ifndef POINT1_H#define POINT1_H
#include <iostream>
#include <Figure.h>
class Point : public Figure {friend ostream &operator<<(ostream &, const Point &);public:Point(float = 0, float = 0); // Constructeur par défaut
void setPoint(float, float);float getX() const { return x; }float getY() const { return y; }
virtual void afficherNomFigures() const {cout << "Point: "; }
virtual void afficher () const;
private:float x, y; 
// Coordonnées x et y de Point};
#endif
