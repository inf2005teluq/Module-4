#include < fstream.h > 
#include < iostream > 
using namespace std;
main() { 
    // Déclaration de variables permettant du programmestring tel;string nom;ofstream fichrep ("contact.txt"); 
    // ouverture en   
    // écriturefor(int i=0; i<10; i++){
    cout << "\nPersonne "<< i+1 << ":\n"
    cout << " donnez le nom? ";
    cin >> nom;fichrep <<nom << " ";
    cout << "\nTelephone?";cin >> tel;
    fichrep << tel << "\n";}
    fichrep.close();
    }
