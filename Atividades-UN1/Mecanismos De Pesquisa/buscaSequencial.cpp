#include<iostream>
#include <vector>
using namespace std;

int buscaSequencial(int arr[], int Xesperado){
    int tam = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < tam; i++) {
        if (arr[i] == Xesperado){
            return i;
        }}

    return -1;
}

/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

// Função recursiva para realizar a Busca Sequencial
int buscaSequencialRecursiva(int arr[], int tamanho, int x, int index = 0) {
    if (index >= tamanho) {
        return -1; // Retorna -1 se o índice for maior ou igual ao tamanho do array (elemento não encontrado)
    }
    if (arr[index] == x) {
        return index; // Retorna o índice do elemento se encontrado
    }
    return buscaSequencialRecursiva(arr, tamanho, x, index + 1); // Chama a função recursivamente
}


/*

Melhor Caso:

O melhor caso ocorre quando o elemento que estamos procurando é o primeiro na lista. Nesse caso, a complexidade é 𝑂(1)
O(1) porque a busca termina imediatamente após a primeira comparação.

Exemplo: Se estivermos procurando por 10 no array {10, 20, 30, 40, 50}, o elemento é encontrado na primeira posição.


Pior Caso:

O pior caso ocorre quando o elemento está na última posição do array ou não está presente no array. Nesse caso, a complexidade é 
𝑂(𝑛), O(n) onde n é o número de elementos no array, porque a busca precisa verificar todos os elementos.

Exemplo: Se estivermos procurando por 50 ou por um elemento inexistente, como 60, no array {10, 20, 30, 40, 50},
o algoritmo precisa percorrer todos os elementos.

*/


int main () {}