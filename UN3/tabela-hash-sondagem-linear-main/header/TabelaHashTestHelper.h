//
//  TabelaHashTestHelper.h
//
//  Criado por Eiji Adachi Medeiros Barbosa
//

#include "TabelaHash.h"

class TabelaHashTestHelper {
public:
    static inline size_t hash(TabelaHash& tabela, std::string chave){
        return tabela.hash(chave);
    }

    static inline std::pair<std::string, std::string>* getElementoNaPosicao(const TabelaHash& tabela, std::size_t posicao) {
        return tabela.elementos[posicao]; 
    }

    static inline void setElementoNaPosicao(TabelaHash& tabela, std::size_t posicao, std::pair<std::string, std::string>* elemento) {
        tabela.elementos[posicao] = elemento; 
    }

    static inline void setElementoNaPosicao(TabelaHash& tabela, std::size_t posicao, std::string chave, std::string valor) {
        auto elemento = new std::pair<std::string, std::string>(chave, valor);
        tabela.elementos[posicao] = elemento; 
    }

    static inline void setQuantidade(TabelaHash& tabela, std::size_t qtd){
        tabela.quantidade = qtd;
    }

    static void preencherTabela(TabelaHash& tabela, std::vector<std::pair<size_t, std::pair<std::string, std::string>*>> dados){
        for( auto e : dados ){
            auto pos = e.first;
            auto par = e.second;
            setElementoNaPosicao(tabela, pos, par);
        }
    }


    static void encherTabela(TabelaHash& tabela){
        for (size_t i = 0; i < tabela.getTamanho(); ++i) {
            auto chave = std::to_string(i);
            auto pos = hash(tabela, chave) % tabela.getTamanho();
            while(getElementoNaPosicao(tabela, pos) != nullptr){
                pos = (pos+1) % tabela.getTamanho();
            }
            setElementoNaPosicao(tabela, pos, new std::pair<std::string, std::string>(chave, "VALOR_" + chave));
        }
        setQuantidade(tabela, tabela.getTamanho());
    }

};
