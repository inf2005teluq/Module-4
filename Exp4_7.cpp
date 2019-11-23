//Fichier Boisson.cpp
#include <BoissonAlcoolisee.h>
// #include <conio.h> pas nécessaire avec Linux
#include <iostream>
using namespace std; 
int main(){
    Article  banc  ("unbanc",  250,  1);  
//  Définir  un  objet article
BoissonAlcoolisee   vin   ("unvin",   12,   1,5);   
//   Un   objet BoissonAlcoolissee
cout<< "Le prix du banc est de "<<banc.prixavectaxe () <<endl;cout<<"Le prix du vin est de "<< vin.prixavectaxe () <<endl;
cout << "Le  prix  du  vin  sans  alcool  est  de  " << vin.Article::prixavectaxe() << endl; 
// getch() ; pas nécessaire si Linux
return 0;}
