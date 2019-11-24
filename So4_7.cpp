zero = 1;
// Le polynôme contient aumoins un terme.
} }
if (zero == 0) 
// Le polynôme ne contient aucun terme. 
cout << '0';cout << endl;} 
Polynome Polynome::operator+(const Polynome& r) const {Polynome temp;int s;int x;int exposantExiste; 
// Traiter l’élément dont l’exposant est nul. 
temp.coefficients[0] = coefficients[0] + r.coefficients[0];
// Mettre les coefficients et exposants des polynômes
// dans des variables temporaires.
for ( s = 1; (s < 100) && (r.exposants[s] != 0); s++) { temp.coefficients[s] = r.coefficients[s]; temp.exposants[s] = r.exposants[s]; } for ( x = 1; x < 100; x++) { exposantExiste = 0; 
// En supposant que l’exposant n’existe pas. 
for (int t = 1; (t < 100) && (exposantExiste == 0); t++) if (exposants[x] == temp.exposants[t]) { temp.coefficients[t] += coefficients[x]; exposantExiste = 1; 
// Exposant trouvé. } 
// Si l’exposant n’existe pas, l’insérer dans temp.
if (exposantExiste == 0) { temp.exposants[s] = exposants[x]; temp.coefficients[s] += coefficients[x]; ++s; } }return temp; } Polynome &Polynome::operator+=(const Polynome &r) {*this = *this + r; return *this; }Polynome Polynome::operator-(const Polynome& r) const { Polynome temp;
int exposantExiste;
int s, x;
// Traiter l’élément dont l’exposant est nul.
temp.coefficients[0] = coefficients[0] -r.coefficients[0]; 
// Mettre les coefficients et exposants des polynômes
// dans des variables temporaires.
for (s = 1;
  (s < 100) && (exposants[s] != 0); s++) {
  temp.coefficients[s] = coefficients[s];
  temp.exposants[s] = exposants[s];
}
for (x = 1; x < 100; x++) {
  exposantExiste = 0; 
  // En supposant que l’exposant n’existe pas.
  for (int t = 1; (t < 100) && (exposantExiste == 0); t++) 
  if (r.exposants[x] == temp.exposants[t]) {temp.coefficients[t] -= r.coefficients[x];
  exposantExiste = 1; 
  // Exposant trouvé.
  } 
  // Si l’exposant n’existe pas, l’insérer dans temp. 
  if (exposantExiste == 0) {temp.exposants[s] = r.exposants[x]; 
  temp.coefficients[s] -= r.coefficients[x];
  ++s; }} return temp; } Polynome &Polynome::operator-=(const Polynome& r) {*this = *this -r;return *this;} Polynome Polynome::operator*(const Polynome& r) {Polynome temp;int s = 1;
  for (int x = 0; (x < 100) && (x == 0 || coefficients[x] != 0); x++)
  for (int y = 0; (y < 100) && (y == 0 || r.coefficients[y] != 0); y++)
  if (coefficients[x] * r.coefficients[y]) if ((exposants[x] == 0) && (r.exposants[y] == 0)) temp.coefficients[0] += coefficients[x] * r.coefficients[y]; 
  else { temp.coefficients[s] = coefficients[x] * r.coefficients[y]; temp.exposants[s] = exposants[x] + r.exposants[y]; ++s; }CombinerPolynome(temp); 
  // Combiner les termes communs.  
  return temp; }
  void Polynome::CombinerPolynome(Polynome& w) {Polynome temp = w;
  int exp,x;
  for (x = 0; x < 100; x++) { w.coefficients[x] = 0;        w.exposants[x] = 0; } for (x = 1; x < 100; x++) { exp = temp.exposants[x]; for (int y = x + 1; y < 100; y++) if (exp == temp.exposants[y]) { temp.coefficients[x] += temp.coefficients[y];
  temp.exposants[y] = 0;
  temp.coefficients[y] = 0;
}
}
w = temp;
}
Polynome & Polynome::operator *= (const Polynome & r) {
  * this = * this * r;
  return *this;
}
void Polynome::entrerTermes(void) {
    int trouve = 0, nombreDeTermes, c, e;
    int terme;
    cout << endl << "Entrer le nombre de termes du polynôme : ";
    cin >> nombreDeTermes;
    for (int n = 1; n <= nombreDeTermes; n++) {
      cout << endl << "Entrer le coefficient : ";
      cin >> c;
      cout << "Entrer l’exposant : ";
      cin >> e;
      if (c != 0) { 
          // L’élément d’exposant nul correspond au premier élément.
          
          if (e == 0) { coefficients[0] += c; continue;} for (terme = 1; (terme < 100) && (coefficients[terme] != 0); terme++) if (e == exposants[terme]) {coefficients[terme] += c; exposants[terme] = e; 
          trouve = 1; 
          // Exposant existant est mis à jour.
          }if (trouve == 0) { 
              // Ajouter des termes.
              coefficients[terme] += c;
              exposants[terme] = e; 
              
          }
          
      }
        
    }
    
}
              // Programme principal 
              ///#include "Ch4_Ex3.h
              "main() { 
                  Polynome a, b, c, t;a.entrerTermes();b.entrerTermes();
                  cout << "Le premier polynôme est : " << endl;a.AfficherPolynome();
                  cout << "Le second polynôme est : " << endl;b.AfficherPolynome();
                  cout << endl << "L’addition des polynômes aboutit au résultat : " << endl;
                  c = a + b;
                  c.AfficherPolynome();
        cout << endl << "L’opérateur += appliqué aux polynômes conduit au résultat : " << endl;
        t = a; 
        // Sauvegarder la valeur de a.
        a += b;a.AfficherPolynome();
        cout << endl << "La soustraction des polynômes aboutit au résultat : " << endl;a = t; 
        // Réinitialiser a à sa valeur originale.
        c = a -b;c.AfficherPolynome();
        cout << endl << "L’opérateur -= appliqué aux polynômes conduit au résultat : " << endl;a -= b;
        a.AfficherPolynome();
        cout << endl << "La multiplication des polynômes aboutit au résultat : " << endl;
        a = t; 
        // Réinitialiser a à sa valeur originale.
        c = a * b;
        c.AfficherPolynome();
        cout<<endl<< "L’opérateur *= appliqué aux polynômes conduit au résultat : " << endl; a *= b;
        a.AfficherPolynome();
        cout << endl;
        return 0; 
    
}
