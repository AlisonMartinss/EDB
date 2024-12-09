/*
Complexidade:

Melhor Caso e Caso Médio: 
𝑂(𝑛log(𝑛)) – ocorre quando o pivô divide o array em duas partes equilibradas.

Pior Caso: 
O(n^2) – ocorre quando o pivô é o maior ou menor elemento, criando divisões desbalanceadas (como em arrays já ordenados).

Estratégias para evitar o pior caso:
Pivô aleatório ou Mediana de Três (escolher o pivô como a mediana entre o primeiro, último e o elemento do meio) ajudam a manter divisões balanceadas e evitar o pior caso.*/

#include<iostream>
#include<vector>
using namespace std;


int particionar (int arr[], int esq, int dire){

    // Definindo parametros
    int pivo = arr[dire];
    int i = esq - 1;

    for (int j = esq; j <= (dire - 1); j++){
     if (arr[j] <= pivo){
            i++;
            std::swap(arr[j],arr[i]);
    
     }
    }

    std::swap(arr[dire],arr[i+1]);

    return i + 1;}

void quickSort (int arr[],int esq,int dir){
    if (esq < dir) {
        int pivo = particionar(arr,esq,dir);
        quickSort(arr,esq,pivo-1);
        quickSort(arr,pivo+1,dir);
    }
}    

int main () {

    int arr [] = {1,7,3,4,10,33,8,8,22,470};
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << "Testando o algoritimo" << endl;

    quickSort(arr,0,tam-1);

    for (int i = 0; i < tam; i++) {
        cout << (arr[i]) << " ";
    }

}