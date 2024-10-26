#include<iostream>
#include<vector>
using namespace std;



void selectionSort (int v[],int tamanho) {
   
    int menor  = 0;
    int j = 0;
    for (int i = 0; i < tamanho; i++){
        int menor  = i;
        for (int j = i + 1; j < tamanho; j++){
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        if (i != menor) {
            int auxiliar = v[i];
            v[i] = v[menor];
            v[menor] = auxiliar;
        }
    }

      
}


int main () {

    int v[] = {584,982,912,68,980,571,6387};
    int tamanho  = sizeof(v)/sizeof(v[0]);
    selectionSort(v,tamanho);

    cout << "Testando o algoritimo" << endl;

    for (int i = 0; i < tamanho; i++) {
        cout << (v[i]) << " ";
    }
return -1;
}