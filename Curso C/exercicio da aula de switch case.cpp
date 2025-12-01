#include <stdio.h>
#include <stdlib.h>


int main(){

//apresenta  menu do cardapio
	printf("menu             \n");
	printf("1 - capuccino    \n");
	printf("2 - expresso     \n");
	printf("3 - moca    \n");
	printf("4 - biscoitos    \n");

//le as opções ("definindo as variaveis')

	int opcoes;
	scanf("%d", &opcoes);

//seleção das opções

	switch(opcoes){
		case 1: printf("capuccino escolhido ");
		break;
		case 2: printf("expresso escolhido ");
		break;
		case 3: printf("moca escolhido ");
		break;
		case 4: printf("biscoitos escolhido ");
		break;
		default:printf("opçao invalida! ");
		break;
	}

return 0;
}
