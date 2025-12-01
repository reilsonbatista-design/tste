typedef int tipoItem;
const int maxItens = 100;

class fila{
    private:
        int primeiro,ultimo;
        tipoItem* estrutura; //declarando o vetor que vai conter a fila
    
    
    public:
        fila(); //construtor
        ~fila(); //destrutor
        bool estavazio(); //isempty
        bool estacheio(); //isfull
        void inserir(tipoItem item); //push //enqueue
        tipoItem remover(); //pop /dequeue
        void imprimir();

    };