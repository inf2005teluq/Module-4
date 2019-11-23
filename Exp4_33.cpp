// Utilisation d’une file
#include <iostream>
#include <queue>
using namespace std;
int main(void){
    typedef queue<int> qi;
    // Crée une file :
    qi q;
    // Ajoute quelques éléments :
    q.push(2);
    q.push(5);
    q.push(8);
    // Affiche récupère et affiche les éléments :
    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();}
        return 0;
    
}
