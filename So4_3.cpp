#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std; 
class Reference{public: char titre[256];
char auteur[64];
float prix;
char type_argent[4];
Reference(const char *btitre, const char *bauteur, const char *bediteur, float bprix, const char *bdevise);
void afficher_titre(void) { cout << titre << '\n'; }float donner_prix(void) { return(prix); }void afficher_livre(void) { afficher_titre();afficher_editeur(); }
void affecter_editeur(const char *nom) { strcpy(editeur, nom); }private:char editeur[256];void afficher_editeur(void) { cout << editeur << '\n'; } };

Reference::Reference(const char * btitre,
  const char * bauteur,
    const char * bediteur, float bprix,
      const char * bdevise) {
  strcpy(titre, btitre);
  strcpy(auteur, bauteur);
  strcpy(editeur, bediteur);
  prix = bprix;
  strcpy(type_argent, bdevise);
}
int main(void) {
  Reference astuces("J'aime programmer en C/C++", "Jacques et Rénald", "TELE-UNIVERSITE", 19, "$$");
  Reference genial("Programmation objet", "Samuel Pierre", "TELE-UNIVERSITE", 19, "$$");
  astuces.afficher_livre();
  genial.afficher_livre();
}
