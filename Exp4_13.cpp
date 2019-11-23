// Programme principal de l’héritage multiple
// #include <iostream.h> à utiliser pour windows
#include <iostream>
using namespace std;
#include <GetLettre1.h>
#include <GetNumeroSerie1.h>
#include <CleLogiciel1.h>
main ()
{
    GetNumeroSerie n1(10), *n1Ptr;
// Création d’objets de la classe 
GetNumeroSerieGetLettre l2('Z'), *l2Ptr;
// Création d’objets de la classe 
GetLettre1CleLogiciel d(7, 'A',3);
// Création d’objets de laclasse CleLogiciel1
// Afficher les données membres de la classe de 
basecout << "L’objet b1 contient le nombre entier "<< n1.getData() << endl<< "L’objet b2 contient le caractère "<< l2.getData() << endl<< "L’objet d contient :" << endl << d << endl << endl;
// Afficher les attributs des objets de la classe CleLogiciel1
// Opérateur point résout ambiguïté causée par 
getDatacout << "Les attributs de CleLogiciel1 peuvent être "<< " accessibles individuellement :" << endl<< " l’entier " << d. GetLettre::getData() << endl<< " le caractère " << d. GetLettre::getData() << endl<< " le nombre entier " << d.getEntier() << endl << endl;cout << "La classe CleLogiciel peut être traitée comme un"<< "objet de l’une des classes de base :" << endl;
// Traiter la classe CleLogiciel comme un objet de
Base1n1Ptr = &d;cout << "n1Ptr->getData() donne " << n1Ptr->getData() << endl ;
// Traiter la classe CleLogiciel1comme un objet de
Base2l2Ptr = &d;cout << "l2Ptr->getData() donne " << l2Ptr->getData() << endl;
return 0;
