#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int particionar(int V[],int inicio,int fim){
    //Definindo o tamanho 
    int pivo = V[fim];
    int i = inicio -1;

    //Ordenando 

    for(int j = inicio; j <= (fim-1);j++){
        if (V[j] <= pivo){
            i++;
            std::swap(V[j],V[i]);
        }
    }

    std::swap(V[i+1],V[fim]);
    return i + 1;}


void quickSort (int V[],int inicio,int fim){
    if (fim > inicio){
        int pivo = particionar(V,inicio,fim);
        quickSort(V,inicio,pivo-1);
        quickSort(V,pivo+1,fim);
     }
    }


int main (){

    int arr [] = {1,7,3,4,10,33,8,8,22,470};
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << "Testando o algoritimo" << endl;

    quickSort(arr,0,tam-1);

    for (int i = 0; i < tam; i++) {
        cout << (arr[i]) << " ";
    }

}


//TESTANDO COMPILAÇÂO

/*

g++ -Wall -Wextra -o quickSort quickSort.cpp
zip -r nomeDoArquivo.zip <nome da pasta ou arquivo>




*/