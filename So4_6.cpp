// Fichier M4_Ex6.H
///#ifndef M4_Ex6.H
///#define M4_Ex6.H
#include <iostream>
#include <iomanip>
using namespace std;
class Polynome {
  public: Polynome();
  Polynome operator + (const Polynome & ) const;
  Polynome operator - (const Polynome & ) const;
  Polynome operator * (const Polynome & );
  Polynome & operator += (const Polynome & );
  Polynome & operator -= (const Polynome & );
  Polynome & operator *= (const Polynome & );
  void entrerTermes(void);
  void AfficherPolynome(void) const;
  private: int exposants[100];
  int coefficients[100];
  void CombinerPolynome(Polynome & ); 
  // Combiner les termes communs. 
  }; 
  ///#endif
  // Fichier M4_Ex6.cpp
  // Définition des fonctions membres 
  ///#include <iomanip.h>
  ///#include "Ch4_Ex3.h" 
  Polynome::Polynome(){ for (int t = 0; t < 100; t++) {coefficients[t] = 0;exposants[t] = 0; }} void Polynome::AfficherPolynome(void) const { int debut, zero = 0;
  if (coefficients[0]) { 
      // Affichage de la constante 
      cout << coefficients[0]; 
      debut = 1;
      zero = 1; 
      // Le polynôme contient au moins un terme.
      }
      else 
      {  if (coefficients[1])
      { 
          cout << coefficients[1] << 'x'; 
          // Le terme constant du polymôme 
          // n’existe pas. 
          if ((exposants[1] != 0) && (exposants[1] != 1)) 
          cout << '^' << exposants[1]; 
          zero = 1;
          // Le polynôme contient au moins un terme.
          }debut = 2; } 
          // Affichage des termes restants du polynôme  
          for (int x = debut; x < 100; x++) { if (coefficients[x] != 0) {  cout << setiosflags(ios::showpos) << coefficients[x] << resetiosflags(ios::showpos) << 'x'; if ((exposants[x] != 0) && (exposants[x] != 1))  cout << '^' << exposants[x];
