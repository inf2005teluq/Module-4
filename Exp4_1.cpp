//#include <iostream.h> pour windows
// classe de base nommé Point de cette classe 
// dérive une autre classe nommé point_en_Couleur
#include <iostream>
using namespace std;
class point{protected:
6 float x, y;
public: void init(float, float);
void affiche(void);
}; // classe de base , mere aussi de la classe //point_en_couleur
class color
{
    protected:short n;
public:void init(short);
void affiche(void);};
//classe   fille   qui   hérite   de   deux   classe   point   et 
//point_en_couleur
class point_en_couleur: public point, public color{public:void init(float, float, short);
void affiche(void);};
// ici aussi on utilise :: pour bien préciser et 
// lever toute ambiguïté
void point::init(float abs, float ord){x = abs;y = ord;}
// ici aussi on utilise :: pour bien préciser et 
// lever toute ambiguïté sur affiche
void point::affiche(void){cout << ’(’ << x << ’,’ << y << ’)’;}void color::init(short couleur){n = couleur;}void color::affiche(void){cout << n;}
void point_en_coleur::init(float abs, float ord, short couleur) {
  point::init(abs, ord);
  coulor::init(couleur);
}
// ici on utilise :: pour dire à quel classe 
// appartient la méthode pour éviter les 
//ambiguités
void point_en_couleur::affiche(void) {
  point::affiche();
  cout << " avec la couleur ";
  color::affiche();
}
void main(void) {
    point_en_couleur p;
    // p est de typepoint_en_couleur alors
    // il va appeler la fonction init de cette     
    // même classep.init(2.0, 3.0, 4);cout << "\n";
    // Ci-dessous c'est bien affiche de point qui  
    // sera appelé 
    p.point::affiche();
    cout << "\n";
    p.affiche();
    cout << "\n";
    
}
