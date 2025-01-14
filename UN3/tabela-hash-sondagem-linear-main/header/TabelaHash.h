//
//  TabelaHash.h
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#ifndef TABELA_HASH_H
#define TABELA_HASH_H

#include <string>

constexpr std::size_t TAMANHO_PADRAO = 17;
static std::pair<std::string, std::string>* REMOVIDO = (std::pair<std::string, std::string>*)(-1);

class TabelaHash {
    friend class TabelaHashTestHelper;

private:
    std::pair<std::string, std::string>** elementos;
    std::size_t tamanho;
    std::size_t quantidade;

    void setTamanho(std::size_t);
    std::size_t hashValue(const std::string&) const;
    std::size_t hash(const std::string&) const;
    void iniciar();

public:
    TabelaHash();
    explicit TabelaHash(std::size_t);
    ~TabelaHash();

    std::pair<std::string, std::string>* buscar(const std::string&) const;
    bool inserir(const std::string& chave, const std::string&);
    bool remover(const std::string& chave);

    [[nodiscard]] bool invariante() const;
    [[nodiscard]] std::size_t getTamanho() const;
    [[nodiscard]] std::size_t getQuantidade() const;
    [[nodiscard]] bool vazia() const;
    [[nodiscard]] bool cheia() const;

    void imprimir() const;
};

#endif /* TABELA_HASH_H */
