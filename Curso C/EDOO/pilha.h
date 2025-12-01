#include <iostream>
using namespace std;


typedef int TipoItem;
const item maxitem = 100;
    
    

class pilha{
    private:
        int tamanho;
        TipoItem* estrutura;  
    public:
    pilha(); //função construtora
    ~pilha(); //finção destrutora
    
    bool estaCheia(); //verifica se a pilha esta cheia
    bool estaVazia(); //verifica se a pilha esta vazia

    void inserir(TipoItem item); //push //insere
    TipoItem remover(); //pop // remove
    void imprimir(); //print
    int qualTamanho(); //lenght
    
};