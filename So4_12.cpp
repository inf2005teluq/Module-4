#include <iostream>
using namespace std ; 
/* declaration (et définition) de la classe pile_entier */ 
/* ici, toutes les fonctions membres sont "inline" */ 
const int Max = 20 ; 
class pile_entier { int dim ; 
// nombre maximal d'entiers de la pile 
int * adr ; 
// adresse emplacement des dim entiers 
int nelem ; 
// nombre d'entiers actuellement empiles 
public : pile_entier (int n = Max) 
// constructeur(s) 
{ adr = new int [dim=n] ; nelem = 0 ; } ~pile_entier () 
// destructeur 
{ delete adr ; } 
void empile (int p) { 
    if (nelem < dim) adr[nelem++] = p ; } int depile () { if (nelem > 0) return adr[--nelem] ; else return 0 ; // faute de mieux ! } 
    int pleine () { return (nelem == dim) ; } int vide () { return (nelem == 0 ) ; } } ; 
    /* programme d'essai de la classe pile_entier */
    main() { int i ; 
    /* exemples d'utilisation de piles automatiques */
    pile_entier a(3), 
    // une pile de 3 entiers b ;
    // une pile de 20 entiers (par défaut) 
    cout << "a pleine ? " << a.pleine () << "\n" ; 
    cout << "a vide ? " << a.vide () << "\n" ; 
    a.empile (3) ; 
    a.empile (9) ; 
    a.empile (11) ;
    cout << "Contenu de a : " ; 
    for (i=0 ; i<3 ; i++) cout << a.depile () << " " ; cout << "\n" ; 
    for (i=0 ; i<30 ; i++) b.empile (10*i) ; 
    cout << "Contenu de b : " ; for (i=0 ; i<30 ; i++) if ( ! b.vide() ) cout << b.depile () << " " ; 
    cout << "\n" ; 
    /* exemple d'utilisation d'une pile dynamique */
