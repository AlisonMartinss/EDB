#ifndef NoV1
#define NoV1

#include<iostream>
template <typename T>

class NoI {
private:
    T conteudo;
    NoI* proximo;
    NoI* anterior;

public:

//Contrutores
NoI();
NoI(T conteudo);
NoI(T conteudo, NoI* proximo, NoI* anterior);

//Setters

void setProximo  ( NoI*){};
void setAnterior ( NoI*){};
void setConteudo (  T  ){};

//Getters

NoI* getProximo (){};
NoI* getAnterior(){};
T    getConteudo(){}; 

};

template<typename T>
NoI<T>::NoI():
proximo(NULL){};

template<typename T>
NoI<T>::NoI(T conteudoX):
conteudo(conteudoX),proximo(NULL),anterior(NULL){};

template<typename T>
NoI<T>::NoI(T conteudoX, NoI<T>* prox ,NoI<T>* ant):
conteudo(conteudoX),proximo(prox),anterior(ant){};

// Setters

template<typename T>
void NoI<T>::setProximo(NoI<T>* endereco){
    this->proximo = endereco;
}

template<typename T>
void NoI<T>::setAnterior(NoI<T>* endereco){
    this->proximo = endereco;
}

template<typename T>
void NoI<T>::setConteudo(T conteudo){
    this->conteudo = conteudo;
}

//Getters

template<typename T>
NoI<T>* NoI<T>::getProximo(){
    return proximo;
}

template<typename T>
NoI<T>* NoI<T>::getAnterior(){
    return anterior;
}

template<typename T>
T NoI<T>::getConteudo(){
    return conteudo;
}



#endif

