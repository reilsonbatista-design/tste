#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

//usa o tempo atual como semente
	srand(time(NULL));
	
// cria um numero aleatorio de 0 a 9
	int r = rand () % 10;

//imprime o numero gerado
	printf("o numero gerado foi: %d", r);
	
	


return 0;
}
