#include<iostream>
#include<vector>
using namespace std;

/* 
- O que faz? Organiza Array 
- Pior Caso (n^2) - Ordem decrecente
- Melhor Caso (n) - Array já está ordenado
*/

void BubbleSort (int V[],int tamanho) {

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < (tamanho-1)-i; j++){
            if (V[j] > V[j+1]){
                int a = V[j+1];
                V[j+1] = V[j];
                V[j] = a;
            }
        }
    }

}



void BubbleSortPrime(int V[], int tamanho) {
    bool fezSwap = true;
    int fim = tamanho - 1;

    while (fezSwap) {
        fezSwap = false;
        for (int j = 0; j < fim; j++) {
            if (V[j] > V[j + 1]) {
                // Troca os elementos
                int a = V[j + 1];
                V[j + 1] = V[j];
                V[j] = a;
                fezSwap = true; // Define fezSwap como true quando uma troca ocorre
            }
        }
        fim--; // Diminui o fim porque o maior elemento já está na posição correta
    }
}


int main () {

    int v[] = {5,89,21,40,57,99,2,7,5,2,1,8};
    int tamanho  = sizeof(v)/sizeof(v[0]);
    BubbleSortPrime(v,tamanho);

    cout << "Testando o algoritimo" << endl;

    for (int i = 0; i < tamanho; i++) {
        cout << (v[i]) << " ";
    }

    return -1;
}