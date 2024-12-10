#include<iostream>
#include<vector>
using namespace std;

int busca0101(int arr[], int Xesperado, int tam){
    int esquerda = arr[0];
    int direita = arr[tam -1];
    int media = (esquerda + direita) / 2;
    while(1){

        if (esquerda > direita ){return -1;}

        else if (Xesperado == media){return media;}

        else if (Xesperado < media) {
            direita = media -1;
            media = (esquerda + direita) / 2;
        }

        else if (Xesperado > media){
            esquerda = media + 1;
            media = (esquerda + direita) / 2;
        }
    }

}


// Função recursiva para realizar a Busca Binária
int buscaBinariaRecursiva(int arr[], int inicio, int fim, int x) {
    if (inicio > fim) {
        return -1; // Retorna -1 se o elemento não for encontrado
    }

    int meio = inicio + (fim - inicio) / 2; // Calcula o índice do meio

    if (arr[meio] == x) {
        return meio; // Retorna o índice se o elemento for encontrado
    }
    if (arr[meio] > x) {
        // Se o elemento for menor que o elemento do meio, busca na metade esquerda
        return buscaBinariaRecursiva(arr, inicio, meio - 1, x);
    }
    // Se o elemento for maior que o elemento do meio, busca na metade direita
    return buscaBinariaRecursiva(arr, meio + 1, fim, x);
}


/*

Busca elemento.

Melhor Caso:

O melhor caso ocorre quando o elemento que estamos procurando está exatamente no meio do array na primeira comparação.
Nesse caso, a complexidade é 𝑂(1).

Exemplo: Se o array for {10, 20, 30, 40, 50} e estivermos procurando por 30, ele é encontrado imediatamente.


Pior Caso:

O pior caso ocorre quando o elemento está em uma das extremidades ou não está presente no array,exigindo que a busca seja 
feita repetidamente em subseções menores. Nesse caso, a complexidade é O(log n).

Exemplo: Para um array grande, se o elemento estiver na última posição ou se não estiver presente,
o algoritmo precisará dividir o array várias vezes.


Observações:

A Busca Binária só funciona em arrays ordenados. Se o array não estiver ordenado, será necessário ordená-lo primeiro.

A versão recursiva é elegante, mas, como a Busca Binária envolve chamadas recursivas que podem ser profundas para arrays muito grandes,
a versão iterativa pode ser preferível para economizar espaço na pilha.

*/

int main () {
    int arr [] = {1,7,3,4,10,33,8,8,22,470};
    int tam = sizeof(arr)/sizeof(arr[0]);

    cout << "Teste 01 - Esperado: 2,retornou " << (buscaBinariaRecursiva(arr,0,tam-1,10)) << endl;
    cout << "Teste 02 - Esperado: 1,retornou " << (buscaBinariaRecursiva(arr,0,tam-1,1000)) << endl;
/*

zip -r buscaBinariaTestagem.zip buscaBinaria

*/

}