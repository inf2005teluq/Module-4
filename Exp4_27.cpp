#include <iostream>
using namespace std;
enum { kPlusPetit, kPlusGrand, kIdentique};class Donnees{public:Donnees(int val): maValeur(val){}~Donnees(){}int Compare(const Donnees &);void Affiche() { 
    cout << maValeur << endl; }private:int maValeur;};
// La classe ci-dessous Donnees permet d’insérer dans la liste 
// chaînées. Et cette classe 
// possède deux méthodes. Une méthode qui affiche la valeur : //  Affiche  (affiche  la  valeur)  etcompare  qui  renvoie  la position
// relative
int Donnees::Compare(const Donnees & AutresDonnees){if (maValeur < AutresDonnees.maValeur)return kPlusPetit;if (maValeur > AutresDonnees.maValeur)return kPlusGrand;
elsereturn kIdentique;}
//  Compare  permet  de  décider  de  l'endroit  dans  la  liste  où placer 
// un objet particulier.
// Déclarations anticipées
class Noeud;class NoeudTete;class NoeudQueue;class NoeudInterne;
// TDA représentant l'objet noeud dans la liste
// Chaque classe dérivée doit surcharger Insere et Affiche
class Noeud{public:Noeud(){}virtual ~Noeud(){}

virtual Noeud * Insere(Donnees * lesDonnees) = 0;
virtual void Affiche() = 0;
private:
}; // Voici le noeud contenant l'objet réel
// Ici, l'objet est de type Donnees
// Nous verrons comment le rendre plus général
// lorsque nous traiterons des modèles
class NoeudInterne: public Noeud{public:NoeudInterne(Donnees * lesDonnees, Noeud * suivant);~NoeudInterne(){ delete leSuivant; delete mesDonnees; }virtual Noeud * Insere(Donnees * lesDonnees);
// Déléguer !
virtual void Affiche() { mesDonnees->Affiche(); leSuivant->Affiche(); }  private:Donnees * mesDonnees;  
// Les données
Noeud * leSuivant;    
// Pointe vers le prochain noeud
};
// Le constructeur se contente d'initialiser
NoeudInterne::NoeudInterne(Donnees  *  lesDonnees,  Noeud  * suivant):mesDonnees(lesDonnees),leSuivant(suivant){}
// L'essentiel de la liste
// Lorsque vous placez un nouvel objet dans la liste
// il est passé au noeud, qui décide
// où il va et l'insère dans la liste
Noeud * NoeudInterne::Insere(Donnees * lesDonnees){
    // Le nouveau est-il plus grand ou plus petit que moi ?
    int resultat = mesDonnees->Compare(*lesDonnees);switch(resultat){
        // Par convention, s'il est pareil que moi, il passe en 1er
        case kIdentique:       
        case kPlusGrand: 
        // Les nouvelles données viennent avant
moi {
  NoeudInterne * donneesNoeud = new NoeudInterne(lesDonnees, this);
  return donneesNoeud;
} // Il est plus grand que moi, le passer au noeud 
// suivant et le laisser gérer.
case kPlusPetit:leSuivant = leSuivant->Insere(lesDonnees);
return this;}
return this;  
    
}
// Le noeud de queue n'est qu'une sentinelle
class NoeudQueue : public Noeud{public:NoeudQueue(){}~NoeudQueue(){}virtual Noeud * Insere(Donnees * lesDonnees);
virtual void Affiche() { }private:};
//  Si  les  données  viennent  à  moi,  elles  doivent  être insérées
// avant moi car je suis la queue et RIEN ne vient après
Noeud * NoeudQueue::Insere(Donnees * lesDonnees){NoeudInterne * donneesNoeud = new NoeudInterne(lesDonnees, this);return donneesNoeud;}
// Le noeud de tête n'a pas de données, il se contente de
// pointer vers le début de la listeclass NoeudTete : public Noeud{public:NoeudTete();~NoeudTete() { delete leSuivant; }
virtual Noeud * Insere(Donnees * lesDonnees);
virtual void Affiche() {
  leSuivant - > Affiche();
}
private: Noeud * leSuivant;
}; 

// Dès sa création, la tête crée la queue

NoeudTete::NoeudTete(){leSuivant = new NoeudQueue;}
// Rien ne vient avant la tête,
// donc passer lesdonnées au noeud suivant

Noeud * NoeudTete::Insere(Donnees * lesDonnees){leSuivant = leSuivant->Insere(lesDonnees);
return this;}
// J'ai tout le mérite et ne fais rien

class ListeChainee{public:ListeChainee();~ListeChainee() { delete maTete; }void Insere(Donnees * lesDonnees);void AfficheTout() { maTete->Affiche(); }private:NoeudTete * maTete;};
// À la naissance, je crée le noeud de tête
// Celui-ci crée le noeud de queue
// Une liste vide pointe donc vers la tête qui
// pointe vers la queue et ne contient rien
ListeChainee::ListeChainee(){maTete = new NoeudTete;}
// Déléguer, déléguer, déléguervoid ListeChainee::Insere(Donnees * pDonnees){maTete->Insere(pDonnees);}
// Programme de test
int main() {
    Donnees * pDonnees;
    int val;
    ListeChainee ll; 
    // Demander à l'utilisateur deproduire des valeurs// les placer dans la liste
    for (;;){
    cout << "Insérer une valeur (0 pour arrêter) : ";cin >> val;if (val == 0)break;pDonnees = new Donnees(val);ll.Insere(pDonnees);}
    // Parcourir la liste et afficher les données
    ll.AfficheTout();
    return 0;  
    // ll est hors de portée, donc détruit !
    
}
