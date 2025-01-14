//
//  TabelaHash.cpp
//
//  Criado por Eiji Adachi Medeiros Barbosa
//

#include "../header/TabelaHash.h"
#include <iostream>
#include <cassert>
#include <unordered_set>

using namespace std;

TabelaHash::TabelaHash() : tamanho(TAMANHO_PADRAO), quantidade(0) {
    iniciar();
}

TabelaHash::TabelaHash(size_t tamanho) : tamanho(tamanho), quantidade(0) {
    iniciar();
}

void TabelaHash::iniciar() {
    elementos = new std::pair<std::string, std::string>*[this->tamanho]();
    for (std::size_t i = 0; i < tamanho; ++i) {
        assert( elementos[i] == nullptr); // assegurando que todas posições foram inicializadas com nullptr
    }
}

TabelaHash::~TabelaHash() {
    for (std::size_t i = 0; i < tamanho; ++i) {
        if (elementos[i] != nullptr && elementos[i] != REMOVIDO) {
            delete elementos[i];
        }
    }
}

/**
 * @brief Insere um par chave-valor na tabela hash.
 * 
 * Se a chave já existir, atualiza o valor correspondente. Caso contrário, insere o novo par.
 * Se a tabela estiver cheia, a inserção falha.
 * 
 * @param chave A chave a ser inserida.
 * @param valor O valor a ser associado à chave.
 * @return true Se a inserção ou atualização foi bem-sucedida.
 * @return false Se a tabela estava cheia e a inserção falhou.
 */
bool TabelaHash::inserir(const std::string& chave, const std::string& valor) {    
    throw "ERRO: Método inserir ainda não foi implementado.";
}

/**
 * @brief Busca um elemento na tabela hash.
 * 
 * Procura o par chave-valor correspondente à chave fornecida.
 * 
 * @param chave A chave a ser buscada.
 * @return std::pair<std::string, std::string>* Um ponteiro para o par chave-valor encontrado, ou nullptr se a chave não for encontrada.
 */
std::pair<std::string, std::string>* TabelaHash::buscar(const std::string& chave) const {
    
    auto hash =  this->hash(chave);

    for (size_t d = 0; d < tamanho; d++){
        auto indice = (hash + d) % tamanho;
        auto elemento = this->elementos[indice];

        if (elemento == nullptr){
            return nullptr;
        }
        else if (elemento == REMOVIDO) {
            continue;
        }

        else if (elemento->first == chave){
            return elemento;
        }  
    } 

    return nullptr;
}

/**
 * @brief Remove um elemento da tabela hash.
 * 
 * Remove o par chave-valor correspondente à chave fornecida, marcando a posição como REMOVIDO.
 * 
 * @param chave A chave do elemento a ser removido.
 * @return true Se a remoção foi bem-sucedida.
 * @return false Se a chave não foi encontrada na tabela.
 */
bool TabelaHash::remover(const std::string& chave) {
    throw "ERRO: Método remover ainda não foi implementado.";
}

std::size_t TabelaHash::getTamanho() const {
    return tamanho;
}

std::size_t TabelaHash::getQuantidade() const {
    return quantidade;
}

bool TabelaHash::vazia() const {
    return quantidade == 0;
}

bool TabelaHash::cheia() const {
    return quantidade == tamanho;
}

void TabelaHash::imprimir() const {
    for (std::size_t i = 0; i < tamanho; ++i) {
        if (elementos[i] == REMOVIDO) {
            std::cout << i << ": REMOVIDO" << std::endl;
        } else if (elementos[i] != nullptr) {
            std::cout << i << ": " << elementos[i]->first << ":" << elementos[i]->second << std::endl;
        } else {
            std::cout << i << ": []" << std::endl;
        }
    }
}

/**
 * @brief Calcula o valor de hash para uma chave.
 * 
 * Calcula o valor de hash da chave fornecida usando uma função simples de soma dos caracteres.
 * 
 * @param chave A chave para a qual calcular o valor de hash.
 * @return std::size_t O valor de hash calculado.
 */
std::size_t TabelaHash::hashValue(const std::string& chave) const {
    std::size_t x = 0;
    for (char c : chave) {
        x += c;
    }
    return x;
}

/**
 * @brief Calcula o índice da tabela para uma chave.
 * 
 * Usa o valor de hash calculado para determinar o índice correspondente na tabela hash.
 * 
 * @param chave A chave para a qual calcular o índice.
 * @return std::size_t O índice na tabela hash para a chave fornecida.
 */
std::size_t TabelaHash::hash(const std::string& chave) const {
    return hashValue(chave) % tamanho;
}

/**
 * @brief Verifica a integridade da tabela hash, verificando se existem chaves duplicadas.
 * 
 * Percorre todos os elementos da tabela hash e verifica se há chaves repetidas.
 * Se encontrar uma chave duplicada, retorna false (invariante não foi satisfeita). Caso contrário, retorna true (invariante foi satisfeita).
 * 
 * @return true Se invariante da tabela hash foi satisfeita, isto é, se não houver chaves duplicadas na tabela hash.
 * @return false Se invariante da tabela hash não foi satisfeita, isto é, se houver chaves duplicadas na tabela hash.
 */
bool TabelaHash::invariante() const {
    std::unordered_set<std::string> chaves; 

    for (std::size_t i = 0; i < tamanho; ++i) {
        auto elemento = elementos[i];
        if (elemento != nullptr && elemento != REMOVIDO) {
            auto chave = elemento->first;
            if (chaves.find(chave) != chaves.end()) {
                return false; 
            }
            chaves.insert(chave);
        }
    }

    return true;
}
