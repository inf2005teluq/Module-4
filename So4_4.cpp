#include <iostream>
using namespace std;
class objet{public:objet(void);
void afficher_objet(void);
private:int valeur1;int valeur2;
int valeur3;};
objet::objet(void) : valeur1(50), valeur2(500), valeur3(5000) { };
// Constructeur.
void objet::afficher_objet(void){
    cout << "Valeur 1 contient : " << valeur1 << endl;
cout << "Valeur 2 contient : " << valeur2 << endl;
cout << "Valeur 3 contient : " << valeur3 << endl;}
int main(void){
objet nombres;
nombres.afficher_objet();
}
