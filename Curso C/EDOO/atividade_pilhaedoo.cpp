#include <iostream>
#include <string>
using namespace std;

// Tipo básico usado na pilha (char porque vamos trabalhar com símbolos nessa questão)
typedef char TipoItem;
const int maxitem = 1000; // capacidade máxima da pilha

class Pilha{
    private:
        int tamanho;              // controla quantos elementos há na pilha
        TipoItem *estrutura;      // ponteiro para o vetor que representa a pilha
    
    public:
    Pilha(){
        tamanho = 0; // pilha começa vazia
        estrutura = new TipoItem[maxitem]; // alocação dinâmica do array
    }
    
    ~Pilha(){
        delete[] estrutura; // libera memória alocada
    }

    bool estaCheia(){
        return tamanho == maxitem; // pilha cheia quando tamanho chega ao limite
    }

    bool estaVazia(){
        return tamanho == 0; // pilha vazia quando não há elementos
    }
    
    void inserir(TipoItem item){ // push
        if(estaCheia()){
            cout << "A Pilha esta cheia, impossivel inserir!\n";
        }else{
            estrutura[tamanho] = item; // coloca o item no topo
            tamanho++; // aumenta o topo
        }
    }

    TipoItem remover(){ // pop // remover
        if(estaVazia()){
            return '\0'; // retorna vazio quando não tem o que remover
        }else{
            tamanho--; // diminui topo
            return estrutura[tamanho]; // retorna o elemento removido
        }
    }
};

// Função que verifica se a string de parênteses está balanceada
string isBalanced(string s)
{
    Pilha pilha; // cria uma pilha para armazenar os símbolos de abertura
   
    for (char c : s){
        // se for símbolo de abertura, empilha
        if (c == '(' || c == '{' || c == '[') {
                pilha.inserir(c);
        }else{
            // se for fechamento e a pilha estiver vazia, já está errado
            if(pilha.estaVazia()) return "NO";
            
            char topo = pilha.remover(); // pega o último símbolo aberto
            
            // verifica se o símbolo fechado combina com o aberto
            if((c ==')' && topo != '(') ||
               (c =='}' && topo != '{') ||
               (c ==']' && topo != '[')){
                   return "NO"; // combinação errada
               }
        }
    } 
    
    // se no final a pilha estiver vazia, está balanceado
    return pilha.estaVazia() ? "YES" : "NO";
}

int main(){
    int n;
    cin >> n; // lê quantas expressões serão testadas
    cin.ignore(); // limpa quebra de linha pendente
    
    while(n --){ // repete n vezes
        
        string s;
        getline(cin,s); // lê a string completa
        cout << isBalanced(s) << endl; // mostra se está balanceada
        
    }
    return 0;
}
