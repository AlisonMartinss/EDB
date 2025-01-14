#ifndef LISTADUPLAMENTEENCADEADAINTER_H
#define LISTADUPLAMENTEENCADEADAINTER_H

#include "NoAlison.h"
#include<iostream>
#include<string>

typedef enum {
    OK ,
    CABECA_NULA,
    CAUDA_NULA,
    CABECA_ANTERIOR,
    CABECA_PROXIMO_NULO,
    CAUDA_PROXIMO,
    CAUDA_ANTERIOR_NULO,
    CABECA_CAUDA,
    ENCADEAMENTO_INCORRETO
} StatusDaLista ;


class ListaDuplamenteEncadeadaInter
{
private:
    NoAlison<std::string>* cabeca;
    NoAlison<std::string>* cauda;
    int quantidade;

public:
    ListaDuplamenteEncadeadaInter(void);
    ~ListaDuplamenteEncadeadaInter(void);

    //Inserções

    bool inserirnaCabeca(std::string);
    bool inserirnaCauda(std::string);
    bool inserir(int,std::string);

    //Remoções

    bool removerCabeca(void);
    bool removerCauda(void);
    bool remover(int);

    //Getters
    NoAlison<std::string>* getCabeca(void);
    NoAlison<std::string>* getCauda(void);

    //Outros
    StatusDaLista checharConsistencia(void);

    void imprimir(void);
    int tamanho(void);
    bool vazia(void);
};

#endif
