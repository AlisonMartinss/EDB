#include<iostream>
#include<vector>
using namespace std;

void insertionSort (int v[], int tamanho) {

    for (int i = 1; i < tamanho; i++){
        int novo  = v[i];
        int j = i - 1;

        while (j >= 0 && novo < v[j]){
      
             v[j+1] = v[j]; // A partir daqui estamos reefinindo 'Novo';
             j = j - 1;
        }

        v[j+1] = novo;
    }

}

/*

Considere o array: {64, 25, 12, 22, 11}

Iteração 1:

chave = 25

64 é maior que 25, então 64 é movido para a direita.
O array se torna: {25, 64, 12, 22, 11}

Iteração 2:

chave = 12
64 e 25 são maiores que 12, então ambos são movidos para a direita.
O array se torna: {12, 25, 64, 22, 11}

Iteração 3:

chave = 22
64 é maior que 22, então 64 é movido para a direita.
O array se torna: {12, 22, 25, 64, 11}

Iteração 4:

chave = 11
Todos os elementos são maiores que 11 e são movidos para a direita.
O array se torna: {11, 12, 22, 25, 64}
*/

/*
Melhor Caso do Insertion Sort


Complexidade Temporal: O(n)

Quando Ocorre: O melhor caso ocorre quando o array já está ordenado em ordem crescente. 
Nesse cenário, o loop interno (while) nunca é executado, pois todos os elementos estão na posição correta. 
Assim, o algoritmo só percorre o array uma vez, resultando em uma complexidade linear.

=-=---==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-

Pior Caso do Insertion Sort

Complexidade Temporal: O(n^2)

Quando Ocorre: O pior caso acontece quando o array está ordenado em ordem decrescente.
Nesse caso, cada novo elemento precisa ser comparado com todos os elementos da parte ordenada e inserido na primeira posição.
Isso resulta em um número máximo de comparações e trocas, tornando a execução quadrática.

*/

int main () {

    int v[] = {8,6,5,3};
    int tamanho  = sizeof(v)/sizeof(v[0]);
    insertionSort(v,tamanho);

    cout << "Testando o algoritimo" << endl;

    for (int i = 0; i < tamanho; i++) {
        cout << (v[i]) << " ";
    }
    
    
    


return -1;
}