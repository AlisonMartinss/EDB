#include<iostream>
using namespace std;
//Verifica se certo elemento está contido no array
int CheckRepete02 (int arr[], int numero,int tamanho){

    int numero02 = 1;

    for (int i=0;i <= tamanho; i++ ){
      if (arr[i] == numero){
        //cout << "Ocorreu -OK" << endl;
        numero02 = 2;
        break;
      }}
return numero02;
}



// Função que conta elementos repetidos de um Array
int checkRepete (int arr[],int tamanho){
    int count = 0;
    int ocorridos[tamanho];

    for (int i = 0; i < tamanho; i++) {
        //cout << endl;
        //cout << "Elemento: " << arr[i] << endl;
        for (int j=0; j < tamanho; j++){
            //cout << arr[j] << endl;

            if(arr[i] == arr[j]){
                if (i != j){
                //cout << "i: " << i << " j: "<< j << endl;
                // 1: False ; 2: True

                int ocorreu = CheckRepete02(ocorridos,arr[i],count);
                //cout << "Ja Ocorreu? " << ocorreu << endl;
                ocorridos[i] = arr[i];
                if (ocorreu == 1){count++;}
                //cout << "Contador: " << count << endl;
                }}
        }}

return count;
}



int contarRepetido (int arr[], int tamanho) {

    int ocorridos[tamanho];

    int teste = checkRepete(arr,tamanho);

    return teste;
}

int main () {

//Teste 01


int arr1[] = {1,2,1,3,1};
int tamanho1 = 5;

int repetido1 = contarRepetido(arr1,tamanho1);

cout << "Teste 01 - Esperado 1. Retornou: " << repetido1 << endl;


//Teste 02


int arr2[] = {4, 5, 6, 7, 8};
int tamanho2 = 5;

int repetido2 = contarRepetido(arr2,tamanho2);

cout << "Teste 02 - Esperado 0. Retornou: " << repetido2 << endl;




//Teste 03


int arr3[] = {4, 4, 4, 4, 4};
int tamanho3 = 5;

int repetido3 = contarRepetido(arr3,tamanho3);

cout << "Teste 03 - Esperado 1. Retornou: " << repetido3 << endl;

return 0;


}

