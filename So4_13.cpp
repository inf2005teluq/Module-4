pile_entier * adp = new pile_entier (5) ;
// pointeur sur une pile de 5 entiers 
cout << "pile dynamique vide ? " << adp->vide () << "\n" ; for (i=0 ; i<10 ; i++) adp->empile (10*i) ; cout << "Contenu de la pile dynamique : " ;
for (i=0 ; i<10 ; i++) if ( ! adp->vide() ) 
cout << adp->depile () << " " ; }
