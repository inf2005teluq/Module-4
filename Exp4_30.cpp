#include  <iostream>
#include  <list>
using  namespace  std;
typedef  list <int>  li;
int  main (void){li l1;
l1.push_back(2);
l1.push_back(5);
cout << "Tête : " << l1.front() << endl;
cout << "Queue : " << l1.back() << endl;
l1.push_front(7);
cout << "Tête : " << l1.front() << endl;
cout << "Queue : " << l1.back() << endl;
l1.pop_back();
cout << "Tête : " << l1.front() << endl;
cout<< "Queue : " << l1.back() << endl;
return 0;
    
}
