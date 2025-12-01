#include <iostream>
#include "pilha.h"
using namespace std;


typedef int TipoItem;
const item maxitem = 100;
    
    

class pilha{
    private:
        int tamanho;
        TipoItem* estrutura;  
    public:
    pilha::pilha(){
        tamanho = 0;
        estrutura new TipoItem[maxitem];


    } //função construtora
    pilha::~pilha(){

        delete [] estrutura;

    } //função destrutora
    
    bool pilha::estaCheia(){

        return(tamanho == maxitem);

    } //verifica se a pilha esta cheia
    bool pilha::estaVazia(){

        return(tamanho == 0);

    } //verifica se a pilha esta vazia

    void pilha::inserir(TipoItem item){

        if (estaCheia(){
            cout <<"A Pilha esta Cheia\n";
            cout <<"Não e Possivel Inserir este Elemento\n";

        }else{
            estrutura[tamanho] = item;
            tamanho++;

        })

    } //push //insere
    TipoItem pilha::remover(){
        if(estaVazia){
            cout<<"A Pilha esta Vazia\n";
            cout<<"Não Elemento para Ser removido\n"
            return 0;
        }else{
            tamanho--;
            return estrutura[tamanho -1];
        }
    } //pop // remove
    void pilha::imprimir(){
        cout <<"Pilha [ "
        for (int i = 0; i <tamanho; i++){
            cout  << estrutura[i]  <<" ";

        }
        cout<< "]\n";
    } //print
    int pilha::qualTamanho(){
        return tamanho;
    } //lenght
    
};