#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//usa mo tempo como semente
	srand(time(NULL));
	
//defininido variaveis "dados"
	int dado1 = (rand() % 6) + 1; 
	int dado2 = (rand() % 6) + 1; 
	int dado3 = (rand() % 6) + 1;
	
//soma dos resultados
int soma = dado1 + dado2 + dado3;

//imprime o numero gerado
	printf("valores: %d, %d,  %d\n", dado1, dado2, dado3);
	printf("resultado da soma: %d", soma);


return 0;
}
