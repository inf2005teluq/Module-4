// #include <iostream.h> pour windows
#include <iostream>
using namespace std; 
// non nécessaire dans le cas de windows
#include <Article.h>
#include <BoissonAlcoolisee.h>
//#include <conio.h> nécessaire si vous êtes sur windows
int main(){
    // Avec les objets
// Avec les pointeurs Article *psucre = new Article ("Sucre", 25);BoissonAlcoolisee  *pbiere  =new  BoissonAlcoolisee  ("Biere",  12, 1,5);cout<<psucre ->prixavectaxe  ()  <<endl;
//  Article::prixavectaxe ()cout<<pbiere ->prixavectaxe () <<endl;
// BoissonAlcoolisse::prixavectaxe ()psucre= pbiere;cout<<psucre ->prixavectaxe  ()  <<endl;
//  Article::prixavectaxe
() pbiere = (BoissonAlcoolisee * ) psucre; 
// Juste, car psucre pointe     
//vers un alcool
cout<<pbiere ->prixavectaxe () <<endl;
// BoissonAlcoolisse::prixavectaxe ()
// getch(); pas nécessaire avec linux
return 0;}
