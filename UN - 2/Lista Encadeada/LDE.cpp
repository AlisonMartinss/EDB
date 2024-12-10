#include <iostream>
#include <string>
using namespace std;


class No {
    public:
     string conteudo;

     No* proximo;
     No* anterior;

     No(string valor) : conteudo(valor),proximo(nullptr),anterior(nullptr){}
};

class LDE
{
private:
    No* head;
    No* tail;
public:
    LDE():head(nullptr),tail(nullptr){}

//Inserindo no inicio da lista

void addInicio (string valor){

No* noNovo = new No(valor);
if (head==nullptr){
    head->proximo=noNovo;
    tail->anterior=noNovo;
    noNovo->proximo = tail;
    noNovo->anterior = head;
}

else {
    noNovo->proximo = head;
    head->anterior = noNovo;
    head = noNovo;
    

}



}
};


