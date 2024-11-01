#include <iostream>
#include "matrice33.h"

//Calcul de la somme 
void somme3 (int m1[3][3], int m2[3][3], int res3[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res3[i][j] = m1[i][j] + m2[i][j];
        }
        
    }
    
}

//Affichage du resultat
void affichersomme3 ( int matrice[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrice[i][j] << "";
        }
        std::cout << std::endl;
    }
    
}

//Calcul de la soustraction
void soustraction3 (int m1[3][3], int m2[3][3], int res4[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res4[i][j] = m1[i][j] - m2[i][j];
        }
        
    }
    
}

//Affichage du resultat
void affichersoustraction3 ( int matrice[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrice[i][j] << "";
        }
        std::cout << std::endl;
    }
    
}

//Calcul du produit
void produit3 (int m1[3][3], int m2[3][3], int res5[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res5 [i][j]= 0;
            for (int k = 0; k <3; k++)
            {
                res5[i][j] += m1 [i][k] * m2[k][j];
            } 
            
        }
        
    }
    
}

//Affichage du produit
void afficherproduit3 (int matrice[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
 }

 //Calcul du determinant
 int calculdeterminant3 (int matrice[3][3]) {
    return matrice[0][0] * (matrice[1][1] * matrice[2][2] - matrice[1][2] *matrice[2][1]) - matrice[0][1] * (matrice[1][0] *matrice[2][2]
     -  matrice[1][2] * matrice[2][0]) + matrice[0][2] * (matrice[1][0] * matrice[2][1] - matrice[1][1] * matrice[2][0]);
 } 

 //Calcul de l inverse
 void calculinverse3 (int matrice[3][3], float inverse[3][3]){
    int det = calculdeterminant3(matrice);
    if (det == 0)
    {
       std::cout << "impossible de calculer l inverse" << std::endl;
    }
    else
    {
        inverse[0][0] = (matrice[1][1] * matrice[2][2]- matrice[1][2] * matrice[2][1]) / det;
        inverse[0][1] = - (matrice[0][1] * matrice[2][2] - matrice[0][2] * matrice[2][1]) / det;
        inverse[0][2] = (matrice[0][1] * matrice[1][2] - matrice[0][2] * matrice[1][1]) / det;
        inverse[1][0] = - (matrice[1][0] * matrice[2][2] - matrice[1][2] *  matrice[2][0]) / det;
        inverse[1][1] = (matrice[0][0] * matrice[2][2] - matrice[0][2] * matrice[2][0]) / det;
        inverse[1][2] = - (matrice[0][0] * matrice[1][2] - matrice[0][2] *matrice[1][0]) / det;
        inverse[2][0] = (matrice[1][0] * matrice[2][1] - matrice[1][1] * matrice[2][0]) / det;
        inverse[2][1] = - (matrice[0][0] * matrice[2][1] - matrice[0][1] * matrice[2][0]) / det;
        inverse[2][2] = (matrice[0][0] * matrice[1][1] - matrice[0][1] * matrice[1][0]) / det;
    }
    
 }


 //Calcul de la trace
 int calcultrace3 (int matrice[3][3]) {
    return matrice[0][0] + matrice[1][1] + matrice[2][2];
 }


 //Calcul de la transposee
  void calcultransposee3 (int matrice[3][3],int transposee[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposee[j][i] = matrice[i][j];
        }
    }
  }