#include <iostream>
#include <string>

using namespace std;

// tipo básico para armazenar o tamanho dos carros
typedef int tipoItem;
const int maxItens = 100005; // limite máximo de itens na fila

class fila{
private:
    int primeiro, ultimo;    // índices de controle
    tipoItem* estrutura;     // vetor dinâmico da fila

public:
    fila() {
        primeiro = 0;       // fila começa vazia
        ultimo = 0;
        estrutura = new tipoItem[maxItens]; // alocação dinâmica
    }

    ~fila() {
        delete[] estrutura; // libera memória
    }

    bool estavazio() {
        return (primeiro == ultimo); // fila vazia quando índices iguais
    }

    bool estacheio() {
        return ((ultimo - primeiro) == maxItens); // cheia quando atinge o limite
    }

    void inserir(tipoItem item) { // enqueue
        if(!estacheio()) {
            estrutura[ultimo % maxItens] = item; // comportamento circular
            ultimo++;
        }
    }

    tipoItem frente() { // retorna o primeiro da fila
        return estrutura[primeiro % maxItens];
    }

    void remover() { // dequeue
        if(!estavazio()) {
            primeiro++; // só avança o início
        }
    }
};

int main() {
    ios::sync_with_stdio(false); // agiliza IO
    cin.tie(nullptr);

    int c;
    cin >> c; // número de casos de teste

    while(c--) {
        int l, m;
        cin >> l >> m; // l = tamanho da balsa, m = número de carros

        l = l * 100; // converte metros para centímetros

        fila left, right; // filas para os lados left e right

        for(int i = 0; i < m; i++) {
            int tamanho;
            string lado;
            cin >> tamanho >> lado; // tamanho do carro e lado onde está

            if(lado == "left")
                left.inserir(tamanho);  // coloca na fila da esquerda
            else
                right.inserir(tamanho); // coloca na fila da direita
        }

        int travessias = 0; // conta quantas viagens a balsa faz
        int ladoAtual = 0; // 0 = esquerda, 1 = direita

        // enquanto ainda existir carro em qualquer lado
        while(!(left.estavazio() && right.estavazio())) {
            int carga = 0; // carga atual na balsa

            if(ladoAtual == 0) { // balsa está na esquerda
                // carrega enquanto couber
                while(!left.estavazio() && carga + left.frente() <= l) {
                    carga += left.frente();
                    left.remover();
                }
            } else { // balsa está na direita
                while(!right.estavazio() && carga + right.frente() <= l) {
                    carga += right.frente();
                    right.remover();
                }
            }

            travessias++; // cada ciclo conta uma travessia
            ladoAtual = 1 - ladoAtual; // alterna o lado da balsa
        }

        cout << travessias << "\n"; // imprime resultado
    }

    return 0;
}