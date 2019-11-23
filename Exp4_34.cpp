#include <iostream>
#include <queue>
using namespace std;
// Type des données stockées dans la file :
struct A{int k; 
// Priorité
const char *t; 
// ValeurA() : 
k(0), t(0) {}A(int k, const char *t) : k(k), t(t) {}};
// Foncteur de comparaison selon les priorités :

class C {
  public: bool operator()(const A & a1,
    const A & a2) {
    return a1.k < a2.k;
  }
};
int main(void) {
    // Construit quelques objets :A
    a1(1, "Priorité faible");
    A a2(2, "Priorité moyenne 1");
    A a3(2, "Priorité moyenne 2");
    A a4(3, "Priorité haute 1");
    A a5(3, "Priorité haute 2");
    // Construit une file de priorité :
    priority_queue<A, vector<A>, C> pq;
    // Ajoute les éléments :
    pq.push(a5);
    pq.push(a3);
    pq.push(a1);
    pq.push(a2);
    pq.push(a4);
    // Récupère les éléments par ordre de priorité :
    while (!pq.empty()){
        cout << pq.top().t << endl;
        pq.pop();
        
    }
    return 0;
    
}
