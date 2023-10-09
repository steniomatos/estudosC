#include <stdio.h>
#include <math.h>

/**
 * Claculo teorema de pitagorasa
*/
int main()
{
    //declaração
    float a, b, c;
    
    printf("Digite o valor dos catetos: \n");
    
    //recebe o valor dos catetos
    scanf("%f %f", &b, &c);

    // verifica se os catetos são não-negativos
    if (b < 0 || c < 0) {
        printf("Erro: Os catetos devem ser não-negativos.\n");
        return 1;  // Saída com código de erro
    }

     a = sqrt(pow(b, 2) + pow(c, 2));
    
    printf("Valor da hipotenusa  %.2f \n", a);
 
    return 0;
}
