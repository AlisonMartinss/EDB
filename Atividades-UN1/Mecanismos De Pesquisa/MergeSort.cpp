#include<iostream>
#include<vector>

using namespace std ;

void mesclar (int V[], int esquerda, int meio , int direita) {

    int m1 = meio - esquerda + 1; // Aponta para o indice onde se inicia o SubArray
    int m2 = direita - meio; // idem

    // Criando Arrays temporarios

    int *esquerdaArr = new int[m1];
    int *direitaArr = new int[m2];

    //Copiando dados para os arrays tempo

    for (int i = 0; i < m1; i++)
      esquerdaArr[i] = V[esquerda + i];
    for (int j = 0; j < m2; j++)
      direitaArr[j] = V[meio + 1 + j];

    // Índices iniciais dos subarrays e do array mesclado
    int i = 0, j = 0, k = esquerda;


    // Mescla os arrays temporários de volta ao array original
    while (i < m1 && j < m2) {
        if (esquerdaArr[i] <= direitaArr[j]) {
        V[k] = esquerdaArr[i];
        i++;
        } else {
        V[k] = direitaArr[j];
        j++;}
      k++;
    }

        // Copia os elementos restantes de esquerdaArr[], se houver
    while (i < m1) {
    V[k] = esquerdaArr[i];
    i++;
    k++;
    }
    // Copia os elementos restantes de direitaArr[], se houver
    while (j < m2) {
    V[k] = direitaArr[j];
    j++;
    k++;
    }
    // Libera a memória alocada
    delete[] esquerdaArr;
    delete[] direitaArr;


    
  

}

void mergeSort (int V[],int esquerda, int direita) {  

   if (esquerda < direita) {
      int meio = esquerda + (direita - esquerda) / 2;

      //Aplicando MergeS na primeira metade
      mergeSort(V,esquerda,meio);
      //Aplicando MergeS na segunda metade
      mergeSort(V,meio,direita);
      //Mesca duas metades já ordenadas
      mesclar(V,esquerda,meio,direita);
      
}

}


int main () {
    return -1;
}