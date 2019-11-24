#include <iostream> 
#include <cstddef>
// pour la définition de NULL 
using namespace std ; 
// ************* classes exceptions ************* 
class exc_liste {} ; 
class exc_affec : 
public exc_liste {} ; 
class exc_copie : 
public exc_liste {} ; 
// ************* classe mere ************* 
class ParentMere { public : virtual void affiche () = 0 ; 
// fonction virtuelle pure
} ;
// ************* classe liste *************
struct element 
// structure d'un element de liste 
{ element * suivant ;
// pointeur sur l'element suivant
ParentMere * contenu ; 
// pointeur sur un objet quelconque 
} ; class liste { element * debut ; 
// pointeur sur premier élément 
element * courant ; // pointeur sur élément courant
public : liste () 
// constructeur 
{ debut = NULL ; courant = debut ; } ~liste () ; 
// destructeur 
void ajoute (ParentMere *) ; 
// ajoute un élément
void premier () 
// positionne sur premier élément { courant = debut ; } ParentMere * prochain () 
// fournit l’adresse de l'élément 
// courant (0 si fin) 
// et positionne sur prochain 
// élément (riensi fin) 
{ParentMere * adsuiv = NULL ; 
if (courant != NULL) { adsuiv = courant -> contenu ; courant = courant -> suivant ; } return adsuiv ; }
void affiche_liste () ; 
// affiche tous les éléments 
// de la liste 
int fini () { 
return (courant == NULL) ; } 
liste & operator = (liste & l) 
{ throw exc_affec() ; } l
iste (liste &)
{ throw exc_copie() ; } } ; liste::~liste ()
{ element * suiv ; courant = debut ;

while (courant != NULL) {
  suiv = courant - > suivant;
  delete courant;
  courant = suiv;
}
}
void liste::ajoute(ParentMere * chose) {
  element * adel = new element;
  adel - > suivant = debut;
  adel - > contenu = chose;
  debut = adel;
}
void liste::affiche_liste() {
  ParentMere * ptr;
  premier();
  while (!fini()) {
    ptr = (ParentMere * ) prochain();
    ptr - > affiche();
  }
} // ************* classe point *************
class point : public ParentMere { int x, y ; public : point (int abs=0, int ord=0) { x=abs ; y=ord ; } void affiche () {
    cout << "Point de coordonnees : " << x << " " << y << "\n" ; } } ; 
    // ************* classe complexe ************* c
    lass complexe : public ParentMere { double reel, imag ; public : complexe (double r=0, double i=0) { reel=r ; imag=i ; } void affiche () { cout << "Complexe: " << reel << " + " << imag << "i\n" ; } } ; 
    // ************* programme d’essai ************* 
    main() {
        try { liste l1 ; point a(2,3), b(5,9) ; complexe x(4.5,2.7), y(2.35,4.86) ; l1.ajoute (&a) ; l1.ajoute (&x) ; l1.affiche_liste () ; cout << "--------\n" ; l1.ajoute (&y) ; l1.ajoute (&b) ; l1.affiche_liste () ; liste l2 ; l2 = l1 ; 
        // provoque une exception exc_affec 
        ; } catch (exc_liste) { 
            cout << "tentative de copie ou d’affectation de liste" ; } }
