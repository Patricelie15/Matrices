#ifndef MATRICE33_H
#define MATRICE33_H

//Calcul de la somme 
void somme3 (int m1[3][3], int m2[3][3], int res3[3][3]);
void affichersomme3 ( int matrice[3][3]);

//Calcul de la soustraction
void soustraction3 (int m1[3][3], int m2[3][3], int res4[3][3]);
void affichersoustraction3 ( int matrice[3][3]);

//Calcul du produit
void produit3 (int m1[3][3], int m2[3][3], int res5[3][3]);
void afficherproduit3 (int matrice[3][3]);

//Calcul du determinant
 int calculdeterminant3 (int matrice[3][3]);

 //Calcul de l inverse
 void calculinverse3 (int matrice[3][3], float inverse[3][3]);

 //Calcul de la trace
 int calcultrace3 (int matrice[3][3]);

 //Calcul de la transposee
  void calcultransposee3 (int matrice[3][3],int transposee[3][3]);

  #endif