#include <stdio.h>

int main()
{
    float salario;

    printf("Programa que recebe o salario e calcula um aumento de 25%%.\n");
    
    printf("Digite a cotação e qual o valor em dolar: \n");
    
    //recebe a cotação e o valor em dolar
    scanf("%f", &salario);
    
    printf("Valor do novo salario: R$%lf\n", salario*1.25);
    
    return 0;
}
