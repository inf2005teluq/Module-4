// Fichier Article1.h
// Définition de la classe Articl
e#ifndef ARTICLE1_H
#define ARTICLE1_H
#include <string.h>
class Article {public:Article::Article  (const  char*  nom,  float  prix,  int quantite      =      0,      float      tax      =      1.15): prixArticle(prix),quantiteArticle(quantite),taxe(tax){nomArticle= new char[strlen(nom)+1];
strcpy(nomArticle, nom);}
Article ::~Article(){ 
    // Destructeur
    if (nomArticle)nomArticle =""; }float prixsanstaxe () const{return prixArticle ;} 
    // Prix avant taxefloat
    prixavectaxe () const {return (prixArticle*(taxe)*quantiteArticle);}
    //  Obtenir  le  prix  avec taxe
    protected:char* nomArticle; 
    // Nom de l’article
    float prixArticle; 
    // Prix de l’article
    int quantiteArticle; 
    // Quantité en stockfloat taxe; 
    // Taxe appliquée
    };
    #endif
