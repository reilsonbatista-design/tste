

#include <stdio.h>

int main()
{
    
    float precoProduto; //para armazenar o preço do preco do precoProduto   
    
    int  quantidadeVendida; //para armazenar quantidade quantidade quantidadeVendida
    
    float valorVenda;// para armazenar o valor total da valorVenda

    // solicita o preço do precoProduto
    printf("digite aqui o preço do produto:R$");
    scanf("%f &precoProduto");
    
    // solicita a quantidade quantidade vendida 
    printf("digite a quantidade vendida: ");
    scanf("%d , &quantidadeVendida");
    
    // calcula o valor total da venda 
    
    valorVenda = precoProduto * quantidadeVendida;
    
    // Exibe o valor da venda
    
    printf("o valor total da venda e: R$ %.2f\n",valorVenda);
    
    
    
    
    
    return 0;
}