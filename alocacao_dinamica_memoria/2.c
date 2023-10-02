#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Pessoa
struct Pessoa {
    char CPF[12];
    char nome[50];
    double salario;
};

// Função para alocar memória para o vetor de pessoas
struct Pessoa* alocarMemoria(int n) {
    struct Pessoa* pessoas = (struct Pessoa*)calloc(n, sizeof(struct Pessoa));
    if (pessoas == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return pessoas;
}

// Função para preencher o vetor de pessoas
void preencherPessoas(struct Pessoa* pessoas, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        printf("CPF: ");
        scanf("%s", pessoas[i].CPF);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Salário: ");
        scanf("%lf", &pessoas[i].salario);
    }
}

// Função para imprimir o vetor de pessoas
void imprimirPessoas(const struct Pessoa* pessoas, int n) {
    printf("Pessoas:\n");
    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("CPF: %s\n", pessoas[i].CPF);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Salário: %.2lf\n", pessoas[i].salario);
    }
}

int main() {
    int n;

    printf("Digite o número de pessoas: ");
    scanf("%d", &n);

    // Aloca memória para o vetor de pessoas usando calloc
    struct Pessoa* pessoas = alocarMemoria(n);

    // Preenche o vetor de pessoas
    preencherPessoas(pessoas, n);

    // Imprime o vetor de pessoas
    imprimirPessoas(pessoas, n);

    // Libera a memória alocada
    free(pessoas);

    return 0;
}
