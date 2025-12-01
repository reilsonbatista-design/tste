#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da célula da lista
typedef struct celula {
	int dado;
	struct celula *prox;
	
	}tcelula;
	
	
// Ponteiro global para a lista com cabeça
tcelula *lista;


void imprimir(tcelula *lista);
void SubRotinaRemoverNoInicio();
void SubRotinaRemoverNoFim();
void SubRotinaInserirNoInicio();
void SubRotinaInserirNoFim();
void SubRotinaInserirDepoisDe();
void SubRotinaInserirEmOrdem();
void SubRotinaRemoverCelula();
void SubRotinaRemoverDepoisDe();
void SubRotinaImprimir();






void imprimir(tcelula *lista){
	tcelula *p = lista->prox; // pula a cabeça
	while(p != NULL){
		printf("%d -> ", p->dado);
		
		p = p->prox;
	}

printf("NULL\n");
}




void SubRotinaRemoverNoInicio()
{
    printf("\n=== Remover célula no INÍCIO da lista ===\n");
    
    if (lista->prox == NULL)
    {
        printf("\nLista vazia!!!\n");
    }
    else
    {
        printf("\nLista antes de remover: ");
        imprimir(lista);

        // Remove do início
        tcelula *temp = lista->prox; // Primeira célula
        lista->prox = temp->prox;    // Pula a célula removida
        free(temp);                  // Libera memória

        printf("\nLista depois de remover: ");
        imprimir(lista);
    }
}




void SubRotinaRemoverNoFim()
{
    printf("\n=== Remover célula no FINAL da lista ===\n");
    if (lista->prox==NULL)
    {
        printf("\nLista vazia!!!\n");
    }
    else
    {
        printf("\nLista antes de remover: ");
        imprimir(lista);

        /* 1. Executar a rotina que remove no final da lista
           2. Mostrar a lista depois da remorção
           3. Voltar ao passo 1
        */
        
        tcelula *anterior = lista;
        tcelula *atual = lista->prox;
    
	        // Percorre até o último nó


			while(atual->prox != NULL){
				
				anterior = atual;
				atual = atual->prox;
			}


	anterior ->prox = NULL;// Remove referência para o último
	free(atual); // Libera memória
	
	 printf("\nLista depois de remover: ");
     imprimir(lista);
	
	
	
	}
}







int main()
{
    // Criando a lista com cabeça
    lista = (tcelula *) malloc(sizeof(tcelula));
    if (!lista)
    {
        printf("Sem memória disponível!\n");
        exit(1);
    }
    else
    {
        lista->prox = NULL;
    }

    int opcao=0;
    do
    {
        printf("\n *** Lista Simplesmente Encadeada com cabeça ***\n\n");
        printf("     1 - Inserir no início\n");
        printf("     2 - Inserir no fim\n");
        printf("     3 - Inserir depois de\n");
        printf("     4 - Inserir em ordem\n");
        printf("     5 - Remover do início\n");
        printf("     6 - Remover do fim\n");
        printf("     7 - Remover célula específica\n");
        printf("     8 - Remover depois de\n");
        printf("     9 - Imprime lista\n");
        printf("     0 - Fim\n");

        printf("\nDigite a opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            SubRotinaInserirNoInicio();
            break;
        case 2:
            SubRotinaInserirNoFim();
            break;
        case 3:
            SubRotinaInserirDepoisDe();
            break;
        case 4:
            SubRotinaInserirEmOrdem();
            break;
        case 5:
            SubRotinaRemoverNoInicio();
            break;
        case 6:
            SubRotinaRemoverNoFim();
            break;
        case 7:
            SubRotinaRemoverCelula();
            break;
        case 8:
            SubRotinaRemoverDepoisDe();
            break;
        case 9:
            SubRotinaImprimir();
            break;
        case 0:
            break;
        default:
            printf("Opção inválida");
        }
        if (opcao == 0)
        {
            break;
        }
    }
    while (1);
    printf("\nFim");
    return 0;

}



void SubRotinaInserirNoInicio() {}
void SubRotinaInserirNoFim() {}
void SubRotinaInserirDepoisDe() {}
void SubRotinaInserirEmOrdem() {}
void SubRotinaRemoverCelula() {}
void SubRotinaRemoverDepoisDe() {}
void SubRotinaImprimir() { imprimir(lista); }
