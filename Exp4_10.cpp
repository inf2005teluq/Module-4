// Fichier GetLettre1.h
// Définition de la classe GetLettre
#ifndef GETLETTRE1_H
#define GETLETTRE1_H
class GetLettre {public:GetLettre (char c) { lettre = c; }char getData() const { return lettre; }
protected:char lettre; 
//Accessible par les classes dérivées de GetLettre
};
#endif
