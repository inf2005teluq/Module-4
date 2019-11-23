// Exemple d’utilisation des conteneurs#include <iostream>   //include <iostream.h> si windows
//#include <conio.h> 
// pas nécessaire si Linuxu
sing namespace std;
#include <vector.h>
#include <list.h>
int main ()
{
    vector<int> tableauEntiers; 
// Crée un tableau d’entiers videlist<int> listeEntiers; // Crée une liste d’entiers vide
int unEntier;
// Saisie des entierscout << "Saisir le prochain entier (-1 pour finir) : ";
cin >> unEntier;while (unEntier != -1) {tableauEntiers.push_back(unEntier);
listeEntiers.push_back (unEntier);
cout << "Saisir le prochain entier (-1 pour finir) : ";cin >> unEntier;
// Nombre d’élémentsdes conteneurs
cout << "Il a y " << tableauEntiers.size () << " éléments dans le tableau" << endl;
cout << "Il a y " << listeEntiers.size () << " éléments dans la 
liste " << endl;// Accès à des élémentscout  <<  "
Premier élément du tableau: "<<  tableauEntiers.front () << endl;cout << "
Premier élément de la liste: "<< listeEntiers.front () << endl;int milieu = tableauEntiers.size () / 2;cout  <<  "
Élément de milieu de tableau: "<<  tableauEntiers [milieu] << endl;
// getch();pas nécessaire si vous utilisez Linux
    
}
