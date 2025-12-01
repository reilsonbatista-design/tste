#include <iostream>

using namespace std;

// Usando long long porque os valores podem ser grandes
typedef long long tipoItem;
const int maxItens = 100005; // limite máximo da fila e dos vetores

class fila {
private:
    int primeiro, ultimo;      // índices de controle do início e fim da fila
    tipoItem* estrutura;       // vetor dinâmico que armazena os elementos

public:
    fila() {
        primeiro = 0; // início da fila
        ultimo = 0;   // fim da fila
        estrutura = new tipoItem[maxItens]; // alocação dinâmica da fila
    }

    ~fila() {
        delete[] estrutura; // libera memória
    }

    bool estavazio() {
        return (primeiro == ultimo); // fila vazia quando índices são iguais
    }

    bool estacheio() {
        return ((ultimo - primeiro) == maxItens); // fila cheia quando diferença atinge o limite
    }

    void inserir(tipoItem item) { // enqueue
        if (!estacheio()) {
            estrutura[ultimo % maxItens] = item; // insere de forma circular
            ultimo++; // avança o índice de fim
        }
    }

    tipoItem frente() { // retorna o primeiro da fila
        return estrutura[primeiro % maxItens];
    }

    void remover() { // dequeue
        if (!estavazio()) {
            primeiro++; // só avança o início
        }
    }
};

// Implementação do merge sort (divisão e mesclagem)
void mergeSort(tipoItem v[], tipoItem temp[], int left, int right) {
    if (left >= right) return; // condição de parada da recursão

    int mid = (left + right) / 2; // divide o vetor ao meio

    mergeSort(v, temp, left, mid);     // ordena metade esquerda
    mergeSort(v, temp, mid + 1, right); // ordena metade direita

    int i = left, j = mid + 1, k = left; // índices para mesclagem

    // mescla duas metades já ordenadas
    while (i <= mid && j <= right) {
        if (v[i] <= v[j]) temp[k++] = v[i++];
        else temp[k++] = v[j++];
    }

    // copia o resto se ficou algo à esquerda
    while (i <= mid) temp[k++] = v[i++];

    // copia o resto se ficou algo à direita
    while (j <= right) temp[k++] = v[j++];

    // devolve tudo para o vetor original
    for (int x = left; x <= right; x++)
        v[x] = temp[x];
}

int main() {
    ios::sync_with_stdio(false); // acelera IO
    cin.tie(nullptr);

    int n;
    cin >> n; // quantidade de elementos

    fila f; // fila para armazenar os elementos na ordem de entrada
    tipoItem temp[maxItens], t[maxItens]; // vetores auxiliares

    // leitura e inserção na fila
    for (int i = 0; i < n; i++) {
        tipoItem x;
        cin >> x;
        f.inserir(x);
    }

    // descarrega a fila no vetor t
    int idx = 0;
    while (!f.estavazio()) {
        t[idx] = f.frente(); // pega o primeiro
        f.remover();         // remove da fila
        idx++;
    }

    // ordena o vetor com merge sort
    mergeSort(t, temp, 0, n - 1);

    long long espera = 0; // controla o tempo acumulado
    int satisfeitos = 0; // quantas pessoas foram atendidas

    // percorre os valores já ordenados
    for (int i = 0; i < n; i++) {
        // só atende se o tempo acumulado for menor ou igual ao tempo da pessoa
        if (espera <= t[i]) {
            satisfeitos++;   // mais um atendido
            espera += t[i];  // atualiza o tempo acumulado
        }
    }

    // imprime quantos foram satisfeitos
    cout << satisfeitos;

    return 0;
}