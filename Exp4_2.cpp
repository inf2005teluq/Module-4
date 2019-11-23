#include <iostream> 
using namespace std ; 
class D_Voiture{  protected:int H, L ;public:point (int L=0, int H=0) 
{L= longueur ; H=Honteur ;}
virtual void affiche (){
    cout <<"Les dimensions de la voiture sont :" << L << " " << H << "\n" ;}};
class Couleur_Voiture : public D_Voiture
