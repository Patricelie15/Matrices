#ifndef MATRICE22_H
#define MATRICE22_H

//Calcul de la somme de deux matrices
void somme (int m1[2][2], int m2[2][2], int res[2][2]);
void affichersomme(int matrice[2][2]);

//Calcul de la soustraction
void soustraction (int m1[2][2], int m2[2][2], int res1[2][2]);
void affichersoustraction(int matrice[2][2]);

//Calcul du produit
void produit (int m1[2][2], int m2[2][2], int res2[2][2]);
void afficherproduit(int matrice[2][2]);

//Calcul du determinant
int calculdeterminant(int matrice[2][2]);

//Calcul de la transposee
  void calcultransposee (int matrice[2][2],int transposee[2][2]);

  //Calcul de la trace
  int calcultrace(int matrice[2][2]);

  //Calcul de l inverse
  void calculinverse(int matrice[2][2],float inverse[2][2]);

   #endif