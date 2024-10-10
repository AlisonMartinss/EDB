#include<iostream>
#include <vector>
using namespace std;

int buscaSequencial(int arr[], int Xesperado){
    int tam = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < tam; i++) {
        if (arr[i] == Xesperado){
            return i;
        }}

    return -1;
}


int main () {}