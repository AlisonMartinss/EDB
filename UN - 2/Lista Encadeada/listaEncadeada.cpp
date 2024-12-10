#include <iostream>
#include <string>

/* Neste ponto estamos subsituindo um objeto pelo outro (sobrepondo os dados dos repectivos atributos).
        Repare que isso é possivel pq são duas intancias de um mesmo objeto. */

class No {
public:
    std::string conteudo;
    No* proximo;

    No(std::string valor) : conteudo(valor), proximo(nullptr) {}

};

class listaEncadeada
{
private:
    No* head;
public:
    listaEncadeada():head(nullptr) {}

    //Metodo para inserir um No no inicio da lista
    void addInicio(std::string valor){
        No* novoNo = new  No(valor);

        
        head->proximo = head; // ?
        head = novoNo;
    }

    // Meotodo para exibir lista
    void exibirLista () {
        No* atual  = head;
        while(atual != nullptr){
            std::cout << atual->conteudo << "->";
            atual = atual->proximo;
        }

        std::cout << "nullptr" << std::endl;
    }

    // Método para remover o primeiro nó

    void removerInicio () {
        if (head==nullptr){
            std::cout << "A lista está vazia" << std::endl;
            return;
        }

        No* temp = head; // olha dps
        head = head->proximo;
        delete temp; // olha dps
    }

    ~listaEncadeada(){ // Da uma olhada dps
        while (head!= nullptr){
            removerInicio();
        }
    }
};








