#include <iostream>
#include <string.h>
using namespace std;
class Emission{public:char titre[64];char premier_role[64];char second_role[64];void afficher_Emission(void);void initialisation(const char *titre_Emission, const char *premier, const char *second);};
void Emission::afficher_Emission(void){
    cout << "Titre de l’émission : " << titre << endl;
cout << "Acteurs : " << premier_role << " et " << second_role << endl

<< endl;
}
void Emission::initialisation(const char * titre_Emission,
  const char * premier,
    const char * second) {
  strcpy(titre, titre_Emission);
  strcpy(premier_role, premier);
  strcpy(second_role, second);
}
main() {
  Emission Omerta, Petite_Vie;
  Omerta.initialisation("Omerta", "Romano Orzani", "Pierre Gauthier");
  Petite_Vie.initialisation("Petite_Vie", "Marc Messier", "Marc Labrèche");
  Omerta.afficher_Emission();
}
