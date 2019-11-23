#include <iostream>
#include <list>
int main(){
    list<int> lesEntiers;
    // Ici, des instructions pour initialiser la// liste des entiers...
    // Affichage des éléments contenus dans la liste
    list<int>::iterator it;
    for  (it  =  lesEntiers.begin();
    it  !=  lesEntiers.end();
    it++)
    cout << *it << endl;
    
}
