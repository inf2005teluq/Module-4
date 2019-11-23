// Fichier GetNumeroSerie1.H
// Définition de la classe GetNumeroSerie1
#ifndef GETNUMEROSERIE1_H
#define GETNUMEROSERIE1_H
class GetNumeroSerie {public:GetNumeroSerie (int x) {valeur = x;}
int getData() const { return valeur; }protected:int   valeur;   
//Accessible   par   les   classes   dérivées   de Getnumeroserie1};
#endif
