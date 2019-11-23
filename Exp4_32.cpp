// Utilisation d’une pile
#include<iostream>
#include <stack>
using namespace std;
int main(void){
    typedef stack<int> si;
    / / Crée une pile: 
    si s; 
    // Empile quelques éléments :
    s.push(2);
    s.push(5);
    s.push(8);
    // Affiche les éléments en ordre inverse :
    while (!s.empty()){
        cout << s.top() << endl;
    s.pop();}
return 0;
}
