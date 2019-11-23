#include <iostream> 
using namespace std ; 
class D_Voiture{  protected:int H, L ;
public:point (int L=0, int H=0) {L= longueur ; H=Honteur ;}virtual void affiche (){cout <<"Les dimensions de la voiture sont :" << L << " " << H << "\n" ;}};
class Couleur_Voiture : public D_Voiture

{
  short couleur;
  public: Couleur_Voiture(int H = 0, int L = 0, short cl = 1): point(H, L) {
    couleur = cl;
  }
  void affiche() {
    cout << "Je suis une voiture \n";
    cout << " mes dimensions longueur et hauteur sont respectivement    : " << L << " " << H;
    cout << "et ma couleur est :" << couleur << "\n";
  }
};
main() {
  D_Voiture V(8, 4);
  D_Voiture * BM = & p;
  Couleur_Voiture VC(7, 3, 2);
  Voiture_Couleur * BMc = & pc;
  BM - > affiche();
  BMc - > affiche();
  cout << "-----------------\n";
  BM = BMc;
  adp - > affiche();
  adpc - > affiche();
}
