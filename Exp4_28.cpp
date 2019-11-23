class Pile {int taille, *contenu, nb;
public:Pile(int taille_max);~Pile();
virtual void ajouter_au_sommet(int k);
virtual int prendre_au_sommet();};
// Cette méthode ci-dessous qui est le constructeur  permet
// d’initialiser la pile.
Pile::Pile (int taille_max) {
    taille = taille_max;
contenu = new int[taille];
nb = 0;
    
}
Pile::~Pile() {
    delete[] contenu;}void Pile::ajouter_au_sommet(int k){if(nb < taille) 
    { contenu[nb] = k; nb++; 
        
    }
    else abort();}int Pile::prendre_au_sommet() {if(nb > 0) { nb--; 
return contenu[nb];
}
else abort();
        
    }
int main(int argc, char **argv) {Pile pile(10);
pile.ajouter_au_sommet(-1);pile.ajouter_au_sommet(-2);
pile.ajouter_au_sommet(-3);
pile.ajouter_au_sommet(-4);
cout << pile.prendre_au_sommet() << endl;
cout << pile.prendre_au_sommet() << endl;
cout << pile.prendre_au_sommet() << endl;
cout << pile.prendre_au_sommet() << endl;
return 0;}

void Placer(Noeud * noeud) {
    Noeud * courant = arbre;
    Noeud * precedent = NULL; 
    // Si l'arbre est vide, ça va très vite :
    if(arbre == NULL){arbre = noeud;return;}
    // On se fraye un chemin jusqu'a une place vide
    while(courant){precedent = courant;
    if(noeud->valeur < courant->valeur)courant = courant->fils_gauche;
    elsecourant = courant->fils_droite;}
    // si on trouve une place libre, et
    // precedent pointe vers le parent du
    // noeud à replacer.
    
    if(noeud->valeur < precedent->valeur)precedent->fils_gauche = noeud;
    elseprecedent->fils_droite = noeud;}

    void Ajouter(int valeur) { 
        // Création de notre nouveau noeud en mémoire
        Noeud* nouveau = new Noeud;nouveau->valeur = valeur;nouveau->fils_droite = NULL;nouveau->fils_gauche = NULL;
        // Puis on laisse Placer() le mettre à la bonne place
        Placer(nouveau);}

        Noeud * Rechercher(int valeur) {
          Noeud * courant = arbre;
          while (courant) {
            if (valeur == courant - > valeur) return courant;
            else if (valeur < courant - > valeur) courant = courant - > fils_gauche;
            elsecourant = courant - > fils_droite;
          }
          return NULL;
        }

        void Supprimer(Noeud * noeud) {
          Noeud * droite = noeud - > fils_droite;
          Noeud * gauche = noeud - > fils_gauche;
          Noeud * courant = arbre; 
          // Cas délicat : si on supprime la racine?
          if(noeud == arbre){arbre = droite;if(gauche) Placer(gauche);delete noeud;
          return;
        }
        while (courant) {
          if (courant - > fils_droite == noeud || courant - > fils_gauche == noeud) break;
          if (noeud - > valeur >= courant - > valeur) courant = courant - > fils_droite;
          elsecourant = courant - > fils_gauche;
        } // Courant pointe maintenant vers le noeud précédent le
        // noeud à supprimer.
        if(courant->fils_droite == noeud)courant->fils_droite = droite;
        elsecourant->fils_gauche = droite;
        // Et puis on replace l'autre fils du noeud disparuif(gauche) Placer(gauche);
        // Enfin, on libère l'objet noeud de ses obligations
        delete noeud;}

        void Afficher(Noeud * racine) {
          if (racine - > fils_gauche) Afficher(racine - > fils_gauche);
          cout << racine - > valeur << endl;
          if (racine - > fils_droite) Afficher(racine - > fils_droite);
        }

        int main(void) {
          Ajouter(10);
          Ajouter(4);
          Ajouter(15);
          Ajouter(2);
          Ajouter(16);
          Ajouter(1);
          Ajouter(9);
          Ajouter(14);
          Afficher(arbre);
          Noeud * n = Rechercher(4);
          Supprimer(n);
          Afficher(arbre);
          return 0;
        }
