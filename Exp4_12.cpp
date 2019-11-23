// Fichier Clelogiciel.cpp
// Définition des fonctions membres de la classe dérivée
// #include <iostream.h> utilisé pour windows
#include <iostream>
using namespace std;
#include <CleLogiciel1.h>
//  Le  constructeur  de  la  classe  CleLogiciel  appelle  les constructeurs des
// classes GetNumeroSerie et GetLettre.
CleLogiciel:: CleLogiciel (int i, char c, int f): GetNumeroSerie (i), GetLettre(c) 
// Appel du constructeur de chaque classe de base
{
  entier = f;
} // Retourner la valeur de entierint 
CleLogiciel::getEntier() const { return entier; }
// Afficher tous les attributs membres de CleLogiciel
ostream &operator<<(ostream &output, const CleLogiciel &d) {output << " l’entier: " << d.valeur << endl<< " le caractère: " << d.lettre << endl<< " le nombre de jours de la licence: " << d.entier;
return output; 
// Concaténation des valeurs à afficher}
