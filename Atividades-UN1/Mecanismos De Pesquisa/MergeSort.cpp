#include<iostream>
#include<vector>

using namespace std ;

//TESTE 11/11

void merge (int V[],int inicio,int meio,int fim) {
  int n1 = meio - inicio; // Me retorna o TAMANHO do Sub-Array a esquerda
  int n2 = fim - meio; 

  //Criando arrays temporarios. Estamos somente reservando o espaço/tamanho do array.
  int* esqArray = new int[n1];
  int* dirArray = new int[n2];

  //Preenchendo os espaços dos devidos
  // Esquerda
  for (int i = 0; i < n1; i++) {
    esqArray[i] = V[inicio+i];
  }
  // Direita
   for (int j = 0; j < n2; j++) {
    dirArray[j] = V[(meio) + j];
  }

  // Indices iniciais dos subArrays e do array mesclado
  int i = 0,j = 0, k = inicio;

  // Mescla arrays temporarios devolta no array original
  while (i < n1 && j < n2)
  {
    if (esqArray[i] <= dirArray[j]){
      V[k] = esqArray[i];
      i++;}
    else {
      V[k] = dirArray[j];
      j++;}    
    k++;  
}

    // Copia os elementos restantes de esquerdaArr[], se houver
    while (i < n1) {
    V[k] = esqArray[i];
    i++;
    k++;
    }
    // Copia os elementos restantes de direitaArr[], se houver
    while (j < n2) {
    V[k] = dirArray[j];
    j++;
    k++;
    }
    // Libera a memória alocada
    delete[] esqArray;
    delete[] dirArray;
}

void mergeSort (int V[],int inicio, int fim) {  

  if (inicio < fim - 1)
  // Se assegurando que o indice 'fim' não é o mesmo que 'inicio
  // Isso tambem garante que qualquer resultado da operação seguinte seja viavel
   {
    int meio  = (fim + inicio) / 2;
    mergeSort(V,inicio,meio);
    mergeSort(V,meio,fim);
    merge(V,inicio,meio,fim);
   }
}

/* =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */
/*

Merge Sort

O algoritmo Merge Sort tem um desempenho previsível. Abaixo estão os detalhes do melhor e do pior caso.

Melhor Caso
Complexidade: O(n log n)
Quando ocorre: O melhor caso é O(n log n) e ocorre em qualquer situação, independente da ordem inicial dos elementos.
Isso ocorre porque o algoritmo sempre divide o array em duas metades e faz a mesclagem, levando um tempo proporcional ao tamanho do array.

Pior Caso
Complexidade: O(n log n)
Quando ocorre: Assim como o melhor caso, o pior caso do Merge Sort também é O(n log n) e ocorre quando o array exige que cada etapa de
mesclagem compare todos os elementos, o que é inevitável pela estrutura do algoritmo.

Explicação do Tempo O(n log n)
O Merge Sort faz O(log n) divisões do array, pois divide o array ao meio até cada subarray ter um elemento.
Em seguida, realiza a mesclagem dos subarrays, o que leva O(n) para cada divisão. Assim, a complexidade geral é O(n log n).

Observação
O Merge Sort tem desempenho consistente, com a mesma complexidade no melhor, pior e caso médio, o que torna seu desempenho previsível.

Desvantagens
A desvantagem do Merge Sort é o uso de memória extra, pois requer arrays temporários para a etapa de mesclagem,
o que aumenta o consumo de espaço e pode ser limitante em sistemas com pouca memória.

*/


int main () {
  int v[] = {5,89,21,40,57,99,2,7,5,2,1,8};
  int inicio = 0;
  int fim = sizeof(v) / sizeof(v[0]);
  cout << "Testando o algoritimo MergeSort" << endl;
  mergeSort(v,inicio,fim);
  for (int i = 0; i < fim; i++)
  {
    cout << (v[i]) << " ";
  }
  
    return -1;
}