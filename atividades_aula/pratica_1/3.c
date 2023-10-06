#include <stdio.h>

int main()
{
    float cotacao, carteira;

    printf("Programa que recebe uma cotação em dolar e retorna o valor em reais.\n");
    
    printf("Digite a cotação e qual o valor em dolar: \n");
    
    //recebe a cotação e o valor em dolar
    scanf("%f %f", &cotacao, &carteira);
    
    printf("Valor em real: R$%lf\n", carteira*cotacao);
    
    return 0;
}
