#include <stdio.h>

int main()
{
    int anoNasc, anoAtual;

    printf("Programa que recebe o ano de nascimento, ano atual e imprime: a idade da pessoa, a idade que a pessoa terá em 2050.\n");
    
    printf("Digite o ano de nascimento e o ano atual: \n");
    
    //recebe o ano de nascimento e ano atual
    scanf("%i %i", &anoNasc, &anoAtual);
    
    printf("Idade no ano atual: %i\n", anoAtual-anoNasc);
    
    printf("Idade em 2050: %i\n", 2050-anoNasc);
    
    return 0;
}
