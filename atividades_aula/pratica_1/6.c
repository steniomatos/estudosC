#include <stdio.h>

/**
 * Programa que converte Celcius para Fahrenheit.
*/
int main()
{
    //declaração
    float celcius;

    printf("Programa que converte Celcius para Fahrenheit.\n");
    
    printf("Digite a temperatura em Celcius: \n");
    
    //recebe a cotação e o valor em dolar
    scanf("%f", &celcius);
    
    printf("Temperatura em Fahrenheit %.2f ºF\n", (celcius*1.8)+32);
    
    return 0;
}
