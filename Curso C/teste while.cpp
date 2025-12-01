#include <stdio.h>
#define TAM_NOME 50
#define TAM_EN 100
#define TAM_CPF 15



int main(void)
{
    
    //definindo variaveis
    char nome [TAM_NOME];	
	char en [TAM_EN];
	char cpf [TAM_CPF];
	
	//nome
	printf("digite seu nome: \n");
	scanf("%s", nome);
	
	//endereço
	printf("informe seu endereco: \n");
	scanf("%s", en);
	
	//cpf
	printf("informe seu cpf: \n");
	fgets(cpf,TAM_CPF, stdin );
	
	printf("seus dados: \n");	
	
	printf("nome: %s\n endereço: %s\n cpf: %s", nome, en, cpf);
	
	
    return 0;
}
