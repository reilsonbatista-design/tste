/*Utilizando a estrutura de repetição do...while, escreva um programa para:
- Receber a idade de uma pessoas. Criticar para só aceitar idade de 0 a 130 anos.
- Após receber uma idade correta informar a faixa etária da pessoa
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	int idade;

//recebe a idade(declarando variaveis)
	
	do {
	    printf("\ndigite a idade entre 0 e 130 aqui:");
	    scanf("%d", &idade);
	  
	    if(idade < 0 || idade > 130){
	    printf("idade invalida insira um numero entre o e 130\n");
	    }
	}
	while(idade < 0 || idade > 130){
//determina a condição da pessoa segundo a sua idade
    if( idade <=0 && idade >=12){
        printf("criança\n");
    }else if(idade < 13 || idade > 17){
        printf("adolecente\n");
    }else if(idade < 18 || idade > 59){
        printf("adulto");
    else if(idade >=60){
        printf("idoso")
    }
	
return 0;
}
