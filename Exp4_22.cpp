// Accès aux membres privés d’une classe par une fonction amie.
#include <iostream> 
// sans le .h si Linux
using namespace std; 
//nécessaire pour Linux
class BulletindeNotes{friend void MettreAjour(BulletindeNotes &, float); 
// Déclaration de fonction 
amiepublic:ulletindeNotes () {x = 0;} 
// Constructeurvoid afficherNotes () const {cout << x << endl;} 
// Sortieprivate:float x; 
// Membre privé};
// Peut modifier les membres privés de BulletindeNotes puisque
// MettreAjour est déclarée fonction amie de Bulletin de note
void MettreAjour (BulletindeNotes &c, float val){c.x = val; 
// Commande légale puisque MettreAjour est 
// une fonction amie de Bulletin de note
}
int main (){BulletindeNotes bulletin;
cout << " bulletin.x après instanciation: ";bulletin. afficherNotes ();
cout  <<"  bulletin.x  après  l’appel  de  la  fonction  amie MettreAjour: ";
MettreAjour (bulletin, 18); 
// Mettre à jour x avec un amibulletin. 
afficherNotes ();
return 0;
    
}
