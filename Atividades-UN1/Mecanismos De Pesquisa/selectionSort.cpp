#include<iostream>
#include<vector>
using namespace std;



void selectionSort (int v[],int tamanho) {
   
    int menor  = 0;
    int j = 0;
    for (int i = 0; i < tamanho; i++){
        int menor  = i;
        for (int j = i + 1; j < tamanho; j++){
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        if (i != menor) {
            int auxiliar = v[i];
            v[i] = v[menor];
            v[menor] = auxiliar;
        }
    }
}


/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */


/*

Melhor Caso:

Mesmo que o array já esteja ordenado, o Selection Sort ainda percorre todos os elementos, resultando em uma complexidade de tempo de 
O(n^2).

Portanto, o melhor caso ainda tem a mesma complexidade.


Pior Caso:

O pior caso ocorre quando o array está em ordem decrescente ou desordenado, mas a complexidade continua a ser 
O(n^2).

Isso ocorre porque o algoritmo sempre percorre o array duas vezes
(uma para encontrar o menor elemento e outra para colocar o elemento na posição correta).

*/


/*

Antes da Ordenação
{64, 25, 12, 22, 11}

Passos do Selection Sort:

Encontra o menor elemento (11) e o troca com o primeiro elemento:

{11, 25, 12, 22, 64}
Encontra o próximo menor elemento (12) e o troca com o segundo elemento:

{11, 12, 25, 22, 64}
Encontra o próximo menor elemento (22) e o troca com o terceiro elemento:

{11, 12, 22, 25, 64}
Encontra o próximo menor elemento (25) e o troca com o quarto elemento:

{11, 12, 22, 25, 64} (nenhuma troca necessária)
O último elemento já está na posição correta.

Depois da Ordenação
{11, 12, 22, 25, 64}

O array está agora ordenado de forma crescente.

*/


int main () {

    int v[] = {584,982,912,68,980,571,6387};
    int tamanho  = sizeof(v)/sizeof(v[0]);
    selectionSort(v,tamanho);

    cout << "Testando o algoritimo" << endl;

    for (int i = 0; i < tamanho; i++) {
        cout << (v[i]) << " ";
    }
return -1;
}