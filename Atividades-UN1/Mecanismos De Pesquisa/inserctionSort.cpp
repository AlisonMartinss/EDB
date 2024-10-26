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