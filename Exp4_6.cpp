//Fichier BoissonAlcoolisee.h
#ifndef BOISSONALCOOLISEE_H
#define BOISSONALCOOLISEE_H#
include <Boisson1.h>
class BoissonAlcoolisee: public Boisson
{public:BoissonAlcoolisee(const char* nom, float prix, int volume, float  taxeA,  int  quantite  =0):  Boisson(nom,  prix,  volume, quantite), taxeAlcool(taxeA){}
// Redéfinition de la méthode prixavectaxe
float  prixavectaxe()  const  {return  (prixArticle*(taxe  + taxeAlcool)*quantiteArticle);}
protected:float taxeAlcool;};
#endif
