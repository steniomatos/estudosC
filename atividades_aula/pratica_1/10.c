#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    float raio, comprimento, area, volume;

    // Solicita ao usuário que digite o raio
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    // Calcula o comprimento da esfera
    comprimento = 2 * M_PI * raio;

    // Calcula a área da esfera
    area = M_PI * pow(raio, 2);

    // Calcula o volume da esfera
    volume = (3.0 / 4.0) * M_PI * pow(raio, 3);

    // Apresenta os resultados
    printf("Comprimento da esfera: %.2f\n", comprimento);
    printf("Área da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}