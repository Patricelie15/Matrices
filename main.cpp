#include <iostream>
#include "matrice33.h"
#include "matrice22.h"



//Affichage du resultat 
void affichermatrice(float matrice[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << matrice[i][j] << " ";
        }
       std::cout <<std::endl; 
    }
}

void affichermatrice3(float matrice[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrice[i][j] << " ";
        }
       std::cout <<std::endl; 
    }
}

void affichematrice(int matrice[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << matrice[i][j] << " ";
        }
       std::cout <<std::endl; 
    }
}

void affichematrice3(int matrice[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrice[i][j] << " ";
        }
       std::cout <<std::endl; 
    }
}

int main () {
 
int m1[2][2], m2[2][2], res[2][2] = {0},  res1[2][2] = {0},  res2[2][2] = {0}, 
    transposee1[2][2] ={0} ,transposee2[2][2] = {0}, taille, choix, choix2, det1, det2, 
    trace1, trace2;

int res3[3][3] = {0},res4[3][3] = {0},res5[3][3] = {0},transposee3[3][3] = {0},
    transposee4[3][3] = {0},m3[3][3], m4[3][3],det3, det4,trace3, trace4;

float inverse1[2][2] = {0}, inverse2[2][2] ={0} , inverse3[3][3] ={0} , inverse4[3][3] = {0};


std::cout << "choisissez la taille de votre matrice" << std::endl;
std::cout << "entrez 1 pour une matrice de taille 2" << std::endl;
std::cout << "entrez 2 pour une matrice de taille 3" << std::endl;
std::cin >> taille;
switch (taille)
{
case 1:
    std::cout << "entrer la premiere matrice" << std::endl;
        for (int i = 0; i < 2; i++)
        {
                for (int j = 0; j < 2; j++)
                {   
                        std::cout << "m1[ " << i << "][" << j << "]:" << std::endl;
                        std::cin >> m1[i][j];
                }
        }

    std::cout << "\nmatrice entree :" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << m1[i][j] << " ";
        }
  std::cout <<   std::endl;
    }


    std::cout << "entrer la deuxieme matrice" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        std::cout << "m2[ " << i << "][" << j << "]:" << std::endl;
        std::cin >> m2[i][j];
        }
    }

    std::cout << "\nmatrice entree :" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << m2[i][j] << " ";
        }
    std::cout <<   std::endl;
    }

    std::cout << "faites le choix de votre operation" << std::endl;
    std::cout << "entrer 1 pour l addition" << std::endl;
    std::cout << "entrer 2 pour la soustraction" << std::endl;
    std::cout << "entrer 3 pour la multiplication" << std::endl;
    std::cout << "entrer 4 pour le determinant" << std::endl;
    std::cout << "entrer 5 pour l inverse" << std::endl;
    std::cout << "entrer 6 pour la transposee" << std::endl;
    std::cout << "entrer 7 pour la trace" << std::endl;
    std::cin >> choix;

switch (choix)
{
    case 1:
    somme(m1, m2, res);
    std::cout << " la somme est :" << std::endl;
    affichersomme(res);
    break;

    case 2:
    soustraction(m1, m2, res1);
    std::cout << " la soustraction est :" << std::endl;
    affichersoustraction(res1);
    break;

    case 3:
    produit(m1, m2, res2);
    std::cout << " le produit est :" << std::endl;
    afficherproduit(res2);
    break;

    case 4:
    det1 = calculdeterminant(m1);
    det2 = calculdeterminant(m2);
    std::cout << "le determinant de m1 est :" << det1 << std::endl;
    std::cout << "le determinant de m2 est :" << det2 << std::endl;
    break;

    case 5:
    calculinverse(m1, inverse1);
    calculinverse(m2, inverse2);
    std::cout << "l inverse  de m1 est :" << std::endl;
    affichermatrice(inverse1);
    std::cout << "l inverse  de m2 est :" << std::endl;
    affichermatrice(inverse2);
    break
    ;
    case 6:
    calcultransposee(m1, transposee1);
    calcultransposee(m2, transposee2);
    std::cout << "la transposee  de m1 est :" << std::endl;
    affichematrice(transposee1);
    std::cout << "la transposee  de m2 est :" << std::endl;
    affichematrice(transposee2);
    break;

    case 7:
    trace1 = calcultrace(m1);
    trace2 = calcultrace(m2);
    std::cout << "la trace de m1 est " << trace1 << std::endl;
    std::cout << "la trace de m2 est " << trace2 << std::endl;
    break;

    default:
    std::cout << "veuillez entrer un nombre entre 1 et 7. Merci :)" << std::endl;
    break;
}

    break;

    case 2:
    std::cout << "entrer la premiere matrice" << std::endl;
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {   
                        std::cout << "m3[ " << i << "][" << j << "]:" << std::endl;
                        std::cin >> m3[i][j];
                }
        }

    std::cout << "\nmatrice entree :" << std::endl;
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << m3[i][j] << " ";
        }
    std::cout <<   std::endl;
    }


    std::cout << "entrer la deuxieme matrice" << std::endl;
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        std::cout << "m4[ " << i << "][" << j << "]:" << std::endl;
        std::cin >> m4[i][j];
    }
    }

    std::cout << "\nmatrice entree :" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << m4[i][j] << " ";
        }
    std::cout <<   std::endl;
    }

    std::cout << "faites le choix de votre operation" << std::endl;
    std::cout << "entrer 1 pour l addition" << std::endl;
    std::cout << "entrer 2 pour la soustraction" << std::endl;
    std::cout << "entrer 3 pour la multiplication" << std::endl;
    std::cout << "entrer 4 pour le determinant" << std::endl;
    std::cout << "entrer 5 pour l inverse" << std::endl;
    std::cout << "entrer 6 pour la transposee" << std::endl;
    std::cout << "entrer 7 pour la trace" << std::endl;
    std::cin >> choix2;

switch (choix2)
{
    case 1:
    somme3(m3, m4, res3);
    std::cout << " la somme est :" << std::endl;
    affichersomme3(res3);
    break;

    case 2:
    soustraction3(m3, m4, res4);
    std::cout << " la soustraction est :" << std::endl;
    affichersoustraction3(res4);
    break;

    case 3:
    produit3(m3, m4, res5);
    std::cout << " le produit est :" << std::endl;
    afficherproduit3(res5);
    break;

    case 4:
    det3 = calculdeterminant3(m3);
    det4 = calculdeterminant3(m4);
    std::cout << "le determinant de m1 est :" << det3 << std::endl;
    std::cout << "le determinant de m2 est :" << det4 << std::endl;
    break;

    case 5:
    calculinverse3(m3, inverse3);
    calculinverse3(m4, inverse4);
    std::cout << "l inverse  de m3 est :" << std::endl;
    affichermatrice3(inverse3);
    std::cout << "l inverse  de m4 est :" << std::endl;
    affichermatrice3(inverse4);
    break;

    case 6:
    calcultransposee3(m3, transposee3);
    calcultransposee3(m4, transposee4);
    std::cout << "la transposee  de m1 est :" << std::endl;
    affichematrice3(transposee3);
    std::cout << "la transposee  de m4 est :" << std::endl;
    affichematrice3(transposee4);
    break;

    case 7:
    trace3 = calcultrace3(m3);
    trace4 = calcultrace3(m4);
    std::cout << "la trace de m3 est " << trace3 << std::endl;
    std::cout << "la trace de m4 est " << trace4 << std::endl;
    break;

    default:
    std::cout << "veuillez entrer un nombre entre 1 et 7. Merci :)" << std::endl;
    break;
}

    default:
    std::cout << "veuillez choisir entre 1 et 2" << std::endl;
    break;
}
    std::cout << " BONNE CONTINUATION :)" << std::endl;

}
