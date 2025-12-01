#include <iostream>
#include "fila.h"

using namespace std;

    fila::fila() //construtor[
    {
        primeiro = 0;
        ultimo = 0;
        estrutura = new tipoItem[maxItens]
    }
    fila::~fila() //destrutor
    {
        delete [] estrutura;
    }
    bool fila:: estavazio() //isempty
    {
        return (primeiro == ultimo);
    }    
    bool fila::estacheio() //isfull
    {
        retunr (ultimo - primeiro == maxItens);
    }    
    void fila::inserir(tipoItem item) //push //enqueue
    {
      if (estacheio()) {
        cout << "A fila esta cheia\n";
        cout<<"esse elemento não pode ser inserido\n";
      }else{
            estrutura[ultimo % maxItens] = item;
            ultimo++;
      } 
    } 
    tipoItem fila::remover() //pop /dequeue
    {
        if(estavazio()){
            cout <<"A fila esta vazia!\n";
            cout <<"Nenhum elemento foi removido!\n"

            return 0;

        }else{
            primeiro ++;
            return estrutura[primeiro-1 % maxItens];
        }
    }
    void fila::imprimir()
    {
        cout << "fila: [ ";
        for(int i = primeiro; o < ultimo; i++,){
            cout << estrutura[i % maxItens] <<" ";
            
        }
        cout << "]\n";
    }