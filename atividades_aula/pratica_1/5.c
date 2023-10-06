#include <stdio.h>

/**
 * Programa que calcula a área de um losangulo
*/
int main()
{
    //declaração
    float diagonalMaior, diagonalMenor;

    printf("Programa que calcula a área de um losangulo.\n");
    
    printf("Digite a diagonal maior e a diagonal menor: \n");
    
    //recebe a cotação e o valor em dolar
    scanf("%f %f", &diagonalMaior, &diagonalMenor);
    
    printf("Area de um losangulo %f\n", (diagonalMaior*diagonalMenor)/2);
    
    return 0;
}
