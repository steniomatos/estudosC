#include <stdio.h>
#include <math.h>

/**
 * Programa tabuada
*/
int main() {
    // Declaração de variavel
    int x;

    // Solicita ao usuário que digite o raio
    printf("Digite o numero da tabuada: ");
    scanf("%i", &x);

    //resultado da tabuada
    printf("%i * 0 = %i\n", x, x*0);
    printf("%i * 1 = %i\n", x, x*1);
    printf("%i * 2 = %i\n", x, x*2);
    printf("%i * 3 = %i\n", x, x*3);
    printf("%i * 4 = %i\n", x, x*4);
    printf("%i * 5 = %i\n", x, x*5);
    printf("%i * 6 = %i\n", x, x*6);
    printf("%i * 7 = %i\n", x, x*7);
    printf("%i * 8 = %i\n", x, x*8);
    printf("%i * 9 = %i\n", x, x*9);
    printf("%i * 10 = %i\n", x, x*10);
    
    
    return 0;
}