/******************************************************************************

Utilizando a estrutura de repetição do...while, escreva um programa para:
- Receber um turno. Validar para só aceitar M, T, N.
- Após receber o turno correto, mostrar o turno por extenso

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
//declarando variaveis

    char turno;

//recebe  letras e laços de repetição: determina o turno

    do{
    printf("digite aqui o turuno M , T ou N:");   
    scanf(" %c", &turno);
    
//escreve os turnos por extenso

    if(turno == 'M' || turno == 'T' || turno =='N'){
        if(turno == 'M'){
            printf("Turno: manhã\n");
        }if(turno == 'T'){
            printf("Turno: tarde\n");
        }
		}if(turno == 'N'){
            printf("Turno: noite\n");
        }else{
            printf("\nturno invalido dgite 'M', 'T' ou 'N': ");
        }
		while(1); 
    
		}    
    return 0;
}
