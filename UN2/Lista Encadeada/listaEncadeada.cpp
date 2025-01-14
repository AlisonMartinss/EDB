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

        // Primeiro defina para onde vão os idosos. Faça os devidos referenciamentos dos nós já existentes.
        // De emprego aos novos. Faça o devido referenciamento ao novo no criado (colocando o 'head' para apontar p/ o novo 'No').

        No* novoNo = new No(valor);
        novoNo->proximo = head;
        head = novoNo;          
    }

    // Meotodo para exibir lista
    void exibirLista () {

        // Quando escrevemos isso dessa forma,  'atual' esta assumindo 'head', ou seja, englobando todos os seus aspectos. 
        No* atual  = head; 
        while(atual != nullptr){
            std::cout << atual->conteudo << "->";
            atual = atual->proximo;
        }

        std::cout << "nullptr" << std::endl;
    }

    // Método para remover o primeiro nó

    void removerInicio () {
        // - Fazer referenciamento reserva do espaço que se pretende apagar.
        // - Atualizar "No".
        // - Executar ação deletar.



        if (head==nullptr){
            std::cout << "A lista está vazia" << std::endl;
            return;
        }

        /*Aqui estamos lidando com os ponteiros que inicialmente é do head. Que agora podem ser apagados,
        Isso se torna possivel pq agora temos um novo 'No' apontando para o mesmo espaço de memoria. Então perceba a versatilidade. */
        No* temp = head;

        /*Antes de deixar o 'No' head apontando para o 'vazio'. Fazemos ele apontar para o proximo elemento*/
        head = head->proximo;

        delete temp;
    }

    ~listaEncadeada(){ // Da uma olhada dps
        while (head!= nullptr){
            removerInicio();
        }
    }
};








