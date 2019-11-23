#include <iostream>
#include <functional>
#include <list>
using namespace std;
typedef list<int> li;
void print(li &l){li::iterator i = l.begin();
while (i != l.end()){cout << *i << " ";++i;}
cout << endl;return ;}bool parity_even(int i){return (i & 1) == 0;}int main(void){
    // Construit une liste exemple :li l;
    
    l.push_back(2);
    l.push_back(5);
    l.push_back(7);
    l.push_back(7);
    l.push_back(3);
    l.push_back(3);
    l.push_back(2);
    l.push_back(6);
    l.push_back(6);

l.push_back(6);
l.push_back(3);
l.push_back(4);
cout << "Liste de départ :" << endl;
print(l);
li l1; 
// Liste en ordre inverse :
l1 = l;l1.reverse();
cout << "Liste inverse :" << endl;
print(l1);
// Trie la liste 
l1 = l;
l1.sort();
cout << "Liste triée : " << endl;print(l1);
// Supprime tous les 3 :
l1 = l;
l1.remove(3);
cout << "Liste sans 3 :" << endl;
print(l1);
// Supprime les doublons :
l1 = l;l1.unique();
cout << "Liste sans doublon :" << endl;
print(l1);
// Retire tous les nombres pairs :
l1 = l;l1.remove_if(ptr_fun(&parity_even));
cout << "Liste sans nombre pair :" << endl;
print(l1);
// Injecte une autre liste entre les 7 :
l1 = l;
li::iterator i = l1.begin();
++i; 
++i; 
++i;
li l2;
l2.push_back(35);
l2.push_back(36);
l2.push_back(37);l1.splice(i, l2, l2.begin(), l2.end());
cout << "Fusion des deux listes :" << endl;
print(l1);
if (l2.size() == 0)
cout << "l2 est vide" << endl;
return 0;
    
}
