//  Programme  principal  de  la  hiérarchie  formée  par  Point, Rectangle, Cube
//#include <iostream.h> utilisé dans un environnement Windows
//#include <iomanip.h> utilisé dans un environnement Windows
//#include <conio.h> utilisé dans un environnement Windows
#include <iostream>
using namespace std;
#include <iomanip>
#include <Figure.h>
#include <Point1.h>
#include <Rectangle1.h>
#include <Cube1.h>main() {Point point (6, 7); 
// Créer l'objet pointRectangle 
rectangle (11, 8); 
// Créer l'objet rectangleCube 
cube (20, 20, 20); 
// Créer l'objet 
cubepoint.afficherNomFigures(); 
// Liaison statique
cout << point << endl;rectangle.afficherNomFigures(); 
// Liaison statique
cout << rectangle << endl;cube.afficherNomFigures(); 
// Liaison statique
cout << cube << "\n\n";
Figure * tableauFigures[3]; 
// Tableau de pointeurs de type 
// Figure 
*tableauFigures[0] = &point; 
// Contient l'adresse de l'objet de 
PointtableauFigures [1]= &rectangle; 
// Contient l'adresse de l'objet                                 
//de 
RectangletableauFigures[2] = &cube; 
// Contient l'adresse de l'objet 
// de Cube
//  Affichage  du  nom  de  la  forme,                            //l’aire et le volume de chaque objet 
//  vers  lequel  pointe  le  tableau  en                            
//utilisant la liaison dynamique.
for (int i = 0; i < 3; i++) 
{tableauFigures[i]->afficherNomFigures();
cout << endl;
tableauFigures[i]->afficher();
cout << "\nAire = " << tableauFigures[i]->aire()<< "\nVolume = " << tableauFigures[i]->volume()<< endl << endl;
    
}
getch();
return 0;
}
