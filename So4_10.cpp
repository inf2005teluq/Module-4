#include <iostream> 
using namespace std; 
class conversion {protected: double val1; double val2; public: conversion(double i) { val1 = i; } double recuperer_conversion(void) {return val2;} double recuperer_init(void) {return val1;} virtual void calculer(void) = 0; }; 
// Litres en gallons 
class Nombre_litre : public conversion { public: Nombre_litre(double i) : conversion(i) { }
void calculer(void) { val2 = val1 / 3.7854; } }; 
// Fahrenheit en Celsius 
class Temperature_Fahrenheit : public conversion { public: Temperature_Fahrenheit (double i) : conversion(i) { } 
void calculer(void) { val2 = (val1 -32) / 1.8; } }; 
int main(void) {   conversion *p; 
// Pointeur sur classe de base 
Nombre_litre lgob(40); 
Temperature_Fahrenheit fcob(75); 
p = &lgob; 
// Convertit litres en gallons. 
cout << p->recuperer_init() << " litres "; p->calculer(); 
cout << p->recuperer_conversion() << " gallons." << endl; p = &fcob; 
// Convertit Fahrenheit en Celsius. 
cout << p->recuperer_init() << " o Fahrenheit equivaut a "; p->calculer(); 
cout << p->recuperer_conversion() << " o Celsius." << endl; 
    
}
