#include <stdio.h>

int main()
{
    float a, b, c, media;
  
    printf("Digite 3 notas: \n");
    
    //não foi especificado o tipo do número, será considerado float
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    media=(a+b+c)/3;
    
    printf("A média das 3 notas é: %f", media);
    
    return 0;
}
