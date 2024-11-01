#include <iostream>


// Calcul de la somme
void somme (int m1[2][2], int m2[2][2], int res[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
    res[i][j] = m1[i][j] + m2[i][j];
        }   
    }
}

//Affichage du resultat
void affichersomme(int matrice[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
 }   


//Calcul de la soustraction
 void soustraction (int m1[2][2], int m2[2][2], int res1[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
    res1[i][j] = m1[i][j] - m2[i][j];
        }   
    }   
}

//Affichage du resultat
void affichersoustraction(int matrice[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
 }   


 //Calcul de la multiplication
 void produit (int m1[2][2], int m2[2][2], int res2[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res2[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res2[i][j] += m1[i][k] * m2[k][j];
                
            }
            
        }   
    }   
}    

//Affichage du resultat
void afficherproduit(int matrice[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }
 }  


 //Calcul du determinant
  int calculdeterminant(int matrice[2][2]){
    return matrice[0][0]* matrice[1][1] - matrice[0][1]* matrice[1][0];
  }

  //Calcul de la transposee
  void calcultransposee(int matrice[2][2],int transposee[2][2]) {
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            transposee[j][i] = matrice[i][j];
        }
    }
  }


  //Calcul de la trace
  int calcultrace(int matrice[2][2]){
    return  matrice[0][0] + matrice[1][1];
  }

  //Calcul de l inverse
  void calculinverse(int matrice[2][2],float inverse[2][2]) {
    int det = calculdeterminant(matrice);
    if (det == 0)
    {
       std::cout << "cette matrice n est pas inversible" << std::endl;
    }
    else
    {
        inverse[0][0] = matrice[1][1] / det;
        inverse[0][1] = - matrice[0][1] / det;
        inverse[1][0] = - matrice[1][0] / det;
        inverse[1][1] = matrice[0][0] / det;
    }
  }

  