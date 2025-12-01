#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){

	int i;
	int soma = 0;
	
	
	for(int i = 0; i < 10; i++){
	
	
	//imprimei i e pula uma linha
	
printf("i = %d (soma : %d)\n", i, soma);
	
	//imncrementa o valor de i na soma
	//soma recebe -> o valor atual da soma + i
	
	soma = soma + i;
	
	}	
	
	printf("soma = %d", soma);
	
return 0;	
}

