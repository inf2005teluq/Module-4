// Fichier M4_Ex5.h
///#ifndef M4_Ex5_H
///#define M4_Ex5_H
#include <iostream>
#include <iomanip>
using namespace std;
class CompteEpargne {public: CompteEpargne(double b) { Balance= b >= 0 ? b : 0; }void CalculerIntMensuel(void);
static void CalculerIntMensuel(double);
void AfficherBalance(void);
private:double Balance;
static double TauxIntAn;
}; 
///#endif 
// Fichier Ch5_Ex5.cpp
// Définitiondes fonctions membres 
///#include "Ch5_Ex5.h"
///#include <iostream>
///#include <iomanip> 
// Initialisation des membres statiques  
double CompteEpargne::TauxIntAn = 0.0; void CompteEpargne::CalculerIntMensuel(void) { Balance+= Balance* (TauxIntAn / 12.0); } void CompteEpargne::CalculerIntMensuel(double i) { TauxIntAn = (i >= 0 && i <= 1.0) ? i : .03; } void CompteEpargne::AfficherBalance(void) { 
    cout.setf(ios::fixed | ios::showpoint); 
cout << '$' << setprecision(2) << Balance; } 
// Programme principal de Ch5_Ex5.cpp
///#include <iostream>
///#include <iomanip>
//using namespace std;
///#include " Ch5_Ex5.h" 
main() { CompteEpargne epargne1(2000.0), epargne2(3000.0); CompteEpargne::CalculerIntMensuel(.03); cout << endl << "Affichage des balances mensuelles pour un an à un taux de 3 %" << endl << "Balance: Compte 1 "; epargne1.AfficherBalance(); cout << "\tCompte 2"; epargne2.AfficherBalance(); for (int mois = 1; mois <= 12; mois++) { epargne1.CalculerIntMensuel(); epargne2.CalculerIntMensuel(); cout << endl << "Mois" << setw(3) << mois << ": Compte 1 "; epargne1.AfficherBalance();
cout << "\tCompte 2 ";
epargne2.AfficherBalance();
}
CompteEpargne::CalculerIntMensuel(.04);
epargne1.CalculerIntMensuel();
epargne2.CalculerIntMensuel();
cout << endl << "Après avoir fixé le taux d’intérêt à 4 %" << endl << "Balances: Compte 1 ";
epargne1.AfficherBalance();
cout << "\tCompte 2 ";
epargne2.AfficherBalance();
return 0;
}
