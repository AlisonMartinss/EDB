


#include <iostream>
#include <string>
#include "ListaDuplamenteEncadeadaInter.h"





ListaDuplamenteEncadeadaInter::ListaDuplamenteEncadeadaInter(){
    this->cabeca = new NoAlison<std::string>("ESSE_E_O_CONTEUDO_DA_CABECA_--NAO_DEVE_SER_ACESSADA");
    this->cauda = new NoAlison<std::string>("ESSE_E_O_CONTEUDO_DA_CABECA_--NAO_DEVE_SER_ACESSADA");

    cabeca->setProximo(this->cauda);
    cabeca->setAnterior(nullptr);

    cauda->setAnterior(this->cabeca);
    cauda->setProximo(nullptr);

    this->quantidade = 0;
}

ListaDuplamenteEncadeadaInter::~ListaDuplamenteEncadeadaInter() {
    delete cabeca;
    delete cauda;
}

//Getters

NoAlison<std::string>* ListaDuplamenteEncadeadaInter::getCabeca(void)
{
 return this->cabeca;
}

NoAlison<std::string>* ListaDuplamenteEncadeadaInter::getCauda(void)
{
 return this->cauda;
}

//Inserir

bool ListaDuplamenteEncadeadaInter::inserirnaCabeca(std::string conteudo)
{
 auto novo = new NoAlison<std::string>(conteudo);

 //Mapeando novo
 novo->setProximo(cabeca->getProximo());
 novo->setAnterior(cabeca);

 //Att vizinhos
 novo->getAnterior()->setProximo(novo);
 novo->getProximo()->setAnterior(novo);

 quantidade++;
 return true;
}

bool ListaDuplamenteEncadeadaInter::inserirnaCauda(std::string conteudo)
{
 auto novo = new NoAlison<std::string>(conteudo);

 //Mapeando novo
 novo->setProximo(this->cauda);
 novo->setAnterior(this->cauda->getAnterior());

 //Att vizinhos
 novo->getAnterior()->setProximo(novo);
 novo->getProximo()->setAnterior(novo);

 quantidade++;
 return true;
}

bool ListaDuplamenteEncadeadaInter::removerCabeca(void)
{
  NoAlison<std::string>* aux = cabeca->getProximo();


 cabeca->setProximo(aux->getProximo());
 aux->getProximo()->setAnterior(cabeca);

delete aux;
quantidade--;
return true;

}

bool ListaDuplamenteEncadeadaInter::removerCauda(void)
{
  NoAlison<std::string>* aux = cauda->getAnterior();


 cauda->setAnterior(aux->getAnterior());
 aux->getAnterior()->setProximo(cauda);

delete aux;
quantidade--;
return true;

}

int ListaDuplamenteEncadeadaInter::tamanho(){
    return this->quantidade;
}

bool ListaDuplamenteEncadeadaInter::vazia(){
    if (quantidade > 1) {
        return false;
    }

    return true;
}


void ListaDuplamenteEncadeadaInter::imprimir(void)
{
	for(auto n = this->cabeca->getProximo(); n != this->cauda; n = n->getProximo())
	{
		std::cout << n->getConteudo() << " ";
	}
	std::cout << std::endl;
}







