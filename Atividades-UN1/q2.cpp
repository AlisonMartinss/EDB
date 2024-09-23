#include<iostream>
using namespace std;

//Função que verifica se Array está ordenado em ordem crescente

bool verificaArray (int arr[], int tamanho) {
//

for (int i = 0; i < (tamanho-1);i++){
    int posteriorFato = i+1;
    if (arr[posteriorFato] != (arr[i]+1)){
        //cout << "Indice: " << i << " Numero " << arr[i] << endl;
        //cout << "Funcao - Numero: " << arr[i] << " Numemro posivelmente posterior " << arr[i] + 1 << " Numero posterior real " << arr[posteriorFato] << endl;
        return false;
        break;
    }

    else {
        //cout << "Foi no outro " <<  endl;
    }


}
    return true;
}

int main (){

// Teste 01

int arr1[]={1,2,3,4};
int tamanho = 4;

bool ordenado1 = verificaArray(arr1,tamanho);

cout << "Teste 01 - Esperado: true,retornou " << (ordenado1 ? "true" : "false") <<
endl;

// Teste 02

int arr2[]={1,2,4,3};
int tamanho2 = 4;

bool ordenado2 = verificaArray(arr2,tamanho2);

cout << "Teste 02 - Esperado: false,retornou " << (ordenado2 ? "true" : "false") <<
endl;

return 0;

}