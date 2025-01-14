#ifndef NOALISON_H
#define NOALISON_H

#include<iostream>
template <typename T>

class NoAlison {

private :
    T conteudo;
    NoAlison<T>* proximo;
    NoAlison<T>* Anterior;

public:

NoAlison();
NoAlison( T conteudoX );
NoAlison( T conteudoX, NoAlison* anterior, NoAlison* proximo );

//Setters
void setProximo(NoAlison*);
void setAnterior(NoAlison*);
void setConteudo(T conteudo);

//Getters
NoAlison* getProximo();
NoAlison*  getAnterior();
T getConteudo();

};
template <typename T>
NoAlison<T>::NoAlison(void):
proximo(NULL){}

template <typename T>
NoAlison<T>::NoAlison(T conteudoX):
conteudo(conteudoX),proximo(NULL),Anterior(NULL){}

template <typename T>
NoAlison<T>::NoAlison(T conteudoX, NoAlison<T>* ant, NoAlison<T>* prox):
conteudo(conteudoX),Anterior(ant),proximo(prox){}

template <typename T>
void NoAlison<T>::setProximo(NoAlison<T>* endereco){
    this->proximo = endereco;
}

template <typename T>
void NoAlison<T>::setAnterior(NoAlison<T>* endereco){
    this->Anterior = endereco;

}

template<typename T>
void NoAlison<T>::setConteudo (T conteudoX){
    this->conteudo = conteudoX;
}


template <typename T>
NoAlison<T>* NoAlison<T>::getProximo(){
    return this->proximo;
}

template<typename T>
NoAlison<T>* NoAlison<T>::getAnterior(){
    return this->Anterior;
}

template<typename T>
T NoAlison<T>::getConteudo(){
    return this->conteudo;
}



#endif 
