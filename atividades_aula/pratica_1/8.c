#include <stdio.h>

/**
 * Programa que recebo um peso e:
 * Imprime novo peso se a pessoa engordar 15%
 * Imprime novo peso se a pessoa emagrece 20%
*/
int main()
{
    //declaração
    float peso;
    
    printf(":Digite o peso: \n");
    
    //recebe a cotação e o valor em dolar
    scanf("%f", &peso);
    
    printf("Novo peso se engordar 15%%  %.2f \n", peso*1.2);

    printf("Novo peso se emagrecer 20%%  %.2f \n", peso*0.8);

    return 0;
}
