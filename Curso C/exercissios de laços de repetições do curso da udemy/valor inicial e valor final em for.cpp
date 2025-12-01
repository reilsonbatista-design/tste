#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int i, valorInicial, valorFinal, passos;
    
    printf("digite o valor inicial aqui: ");
    scanf("%d", &valorInicial);
    
    printf("digite o valor final aqui: ");
    scanf("%d", &valorFinal);
    
    printf("digite o numero de passos aqui: ");
    scanf("%d", &passos);
    
    for(i = valorInicial; i <= valorFinal; i = i + passos)
    {
    printf("%d\n", i);
    }
    
    return 0;
}
