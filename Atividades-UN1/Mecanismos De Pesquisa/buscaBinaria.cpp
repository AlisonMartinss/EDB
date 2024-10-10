#include<iostream>
#include<vector>
using namespace std;

int busca0101(int arr[], int Xesperado, int tam){

    /*Retorna indice: */
    int media = ((arr[0] + arr[tam]) / 2);
    int i = (tam - 1);
    int esq;
    int dir;

    cout << "Media: " << (media) << endl;

    for (int a = 0;a < tam;a++) {

    if (Xesperado == media) {
    return media;}

    else if (Xesperado < media){
        /*Indo para esquerda*/
        esq = (tam - 1) - ((tam-1) - a);
        dir = media - 1;
        media = (dir + esq) / 2;
        cout << "Nova media: " << media << endl;
        }
        

    else if (Xesperado > media) {
        esq = media + 1;
        }
    }

    return -47;
}

int main () {
    int arr [] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(arr)/sizeof(arr[0]);

    cout << "Teste 01 - Esperado: 2,retornou " << (busca0101(arr,2,tam)) << endl;
    cout << "Teste 02 - Esperado: 1,retornou " << (busca0101(arr,1,tam)) << endl;


}