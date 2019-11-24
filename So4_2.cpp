#include <iostream>
using namespace std;
class Rationnel {public:Rationnel(int = 0, int = 1); 
// Constructeur par défaut 
Rationnel addition(const Rationnel &);
Rationnel soustraction(const Rationnel &);
Rationnel multiplication(const Rationnel &);

Rationnel division(Rationnel & );
void AfficherRationnel(void);
void AfficherRationnelVirgule(void);
private: int numerateur;
int denominateur;
void simplification(void); 
// Fonction utilitaire (définie//comme membre privé)};
///#endi
f// Définition des fonctions 
membresRationnel::Rationnel(int n, int d){numerateur = n;denominateur = d;}
Rationnel Rationnel::addition(const Rationnel &a){Rationnel t;t.numerateur = a.numerateur * denominateur + a.denominateur * numerateur;t.denominateur = a.denominateur * denominateur;t.simplification();
return t;}
Rationnel Rationnel::soustraction(const Rationnel &s){Rationnel t;
t.numerateur = s.denominateur * numerateur -denominateur * s.numerateur;
t.denominateur = s.denominateur * denominateur;
t.simplification();}
Rationnel Rationnel::multiplication(constRationnel &m){Rationnel t;t.numerateur = m.numerateur * numerateur;t.denominateur = m.denominateur * denominateur;t.simplification();
return t;}
Rationnel Rationnel::division(Rationnel &v)
{
  Rationnel t;
  t.numerateur = v.denominateur * numerateur;
  t.denominateur = denominateur * v.numerateur;
  t.simplification();
  return t;
}
void Rationnel::AfficherRationnel(void) {
  if (denominateur == 0) cout << "\nERREUR DE DIVISION PAR ZÉRO!!!" << endl;
  else if (numerateur == 0) cout << 0;
  elsecout << numerateur << "/" << denominateur;
}
void Rationnel::AfficherRationnelVirgule(void) {
  cout << (float) numerateur / denominateur;
}
void Rationnel::simplification(void) {
  int superieur = numerateur > denominateur ? numerateur : denominateur;
  int pgdc = 0; 
  // Plus grand diviseur commun
  for (int boucle = 2; boucle <= superieur; boucle++)if (numerateur % boucle == 0 && denominateur % boucle == 0)pgdc = boucle;if (pgdc != 0) {numerateur /= pgdc;denominateur /= pgdc;}        }
  // Programme principal
  main(){
      Rationnel c(1,3), d(7,8), x;c.AfficherRationnel();
  cout << " + ";
  d.AfficherRationnel();
  x = c.addition(d);
  cout << " = ";
  x.AfficherRationnel();
  cout << endl;
  x.AfficherRationnel();
  cout << " = ";
  x.AfficherRationnelVirgule();
  cout << endl << endl;
  c.AfficherRationnel();
  cout << " -";
  d.AfficherRationnel();
  x = c.soustraction(d);
  cout << " = ";
  x.AfficherRationnel();
  cout << endl;
  x.AfficherRationnel();
  cout << " = ";
  x.AfficherRationnelVirgule();
  cout << endl << endl;
  c.AfficherRationnel();
  cout << " x ";
  d.AfficherRationnel();
  x = c.multiplication(d);
  cout << " = ";
  x.AfficherRationnel();
  cout << endl;
  x.AfficherRationnel();
  cout << " = ";
  x.AfficherRationnelVirgule();
  cout << endl << endl;
  c.AfficherRationnel();
  cout << " / ";
  d.AfficherRationnel();
  x = c.division(d);
  cout << " = ";
  x.AfficherRationnel();
  cout << endl;
  x.AfficherRationnel();
  cout << " = ";
  x.AfficherRationnelVirgule();
  cout << endl;
  return 0;
}
