#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void merge(int ){

}

void mergeSort(int V[],int inicio,int fim){
    if (inicio > fim - 1){

        int meio = (inicio + fim) / 2;
        mergeSort(V,inicio,meio);
        mergeSort(V,meio,fim);
        merge(V,inicio,meio,fim);

    }

}

int main (){
  int v[] = {80,79,78,77,76,75};
  int inicio = 0;
  int fim = sizeof(v) / sizeof(v[0]);
  cout << "Testando o algoritimo MergeSort" << endl;
  mergeSort(v,inicio,fim);
  for (int i = 0; i < fim; i++)
  {
    cout << (v[i]) << " ";
  }
}