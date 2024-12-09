#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int buscaBinaria (int V[],int inicio,int fim, int x){
    if (inicio > fim){
        return -1;}
    int meio = (inicio + fim)/2;

    if (V[meio] == x){
        return meio;}

    if (V[meio] > x){
        return buscaBinaria(V,inicio,meio - 1,x);
    }
    
    return buscaBinaria(V,meio + 1,fim,x);
   
}


int main (){

    int arr [] = {1,2,3,4,470,471,490,501};
    int tam = sizeof(arr)/sizeof(arr[0]);

    cout << "Teste 01 - Esperado: 6,retornou " << (buscaBinaria(arr,0,tam-1,471)) << endl;
    cout << "Teste 02 - Esperado: -1,retornou " << (buscaBinaria(arr,0,tam-1,1000)) << endl;
}
