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
