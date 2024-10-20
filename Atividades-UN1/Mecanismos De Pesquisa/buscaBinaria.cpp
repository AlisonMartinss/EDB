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

int main () {
    int arr [] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(arr)/sizeof(arr[0]);

    cout << "Teste 01 - Esperado: 2,retornou " << (busca0101(arr,2,tam)) << endl;
    cout << "Teste 02 - Esperado: 1,retornou " << (busca0101(arr,1,tam)) << endl;


}