#include < fstream.h > 
// # include <conio.h> 
// nécessaire si Windows
# include <cstring.h>
main( ){string nom;
string tel;
ifstream fichrep ("repertoire.txt"); 
// ouvrir le  
// fichier en lecture   
fichrep >> nom >> tel;
while (! fichrep.eof( )) 
// tant qu'on est pas arrivé  
// à la fin du fichier...
{
cout << nom << " \t"<< tel << "\n"; 
// ... on affiche
fichrep >> nom >> tel; 
// on lit les données 
    
}fichrep.close( ); 
// Fermeture du fichier
// getch( );non nécessaire en Linux
}
