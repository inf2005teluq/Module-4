// Fichier CleLogiciel1.h
// Définition de la classe dérivée qui hérite
// des classes de base GetNumeroSerie et GetLettre.
#define CLELOGICIEL_H
#define CLELOGICIEL_H
#include <GetLettre1.h>
#include <GetNumeroSerie1.h>
// Héritage multiple
class CleLogiciel : public GetNumeroSerie, public GetLettre {friend ostream &operator<<(ostream &, const CleLogiciel &);public:CleLogiciel (int, char, int);int getEntier() const;private:int entier; 
// Attribut privé de la classe CleLogiciel
};
#endif
