#include <iostream>
using namespace std;
class simple{int ami1, ami2;public:friend int somme(simple x);void init_ab(int i, int j);};void simple::init_ab(int i, int j){ami1 = i;ami2 = j;}int somme(simple objet){
    // Parce que somme est une amie de simple, elle peut accéder 
    // directement à ami1 et ami2. 
    return objet.ami1 + objet.ami2;}
    int main(void){simple entier;

cout << "La somme des nombres 777 et 999 vaut :" << endl;
entier.init_ab(777, 999);
cout << somme(entier) << endl;
}
