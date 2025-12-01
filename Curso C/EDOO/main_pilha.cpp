#include <iostream>
#include "pilha.h"

using namespace std;


int main(){
    pilha pilha1;

    TipoItem item;
    int opcao;

    cout<<"Programa gerador de pilha\n";

    do{
        cout << "Digite 0 para Parar o Programa!\n";
        cout << "Digite 1 para Inserir um Elemento!\n";
        cout << "Digite 2 para Remover um Elemento!\n";
        cout << "Digite 3 para Imprimir a Pilha!\n";
        cin >>opcao;
        if(opcao == 1){
            cout << "Digite o Elemento a Ser Inserido\n";
            cin >> item;
            pilha1.inserir(item);
        }else if(opcao == 2){
            item = pilha1.remover();
            coutt <<"Elemento Removido: "<<item <<endl;
        }else if(opcao == 3){
            pilha1.imprimir();
        }

    }while (opcao != 0);

    return 0;
}