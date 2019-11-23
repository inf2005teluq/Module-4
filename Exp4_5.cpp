// Fichier Boisson1.h
// Définition de la classe Boisson
#ifndef BOISSON1_H
#define BOISSON1_H
#include <Article1.h>
class Boisson : public Article {public:Boisson ::Boisson (const char* nom, float prix, int volume, int quantite  =  0):  Article(nom,prix,quantite),volumeBoisson(volume) {}int Volume () const {return volumeBoisson;}
// Accès au volume de la boisson
protected:int volumeBoisson; 
// Volume de la boisson
};
#endif
