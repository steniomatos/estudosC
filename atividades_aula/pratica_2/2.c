#include <stdio.h>
#include <stdlib.h>

/**
 * Um(a) procedimento/função que leia as duas sequências de números naturais a partir
do arquivo, armazene-as em dois vetores e apresente os vetores na tela.
*/

#define TAMANHO_MAXIMO 100  // Defina o tamanho máximo dos vetores

// Função para ler sequências a partir de um arquivo e armazenar em vetores
void lerEArmazenarSequencias(char *nomeArquivo, int vetor1[], int vetor2[], int *tamanho1, int *tamanho2) {
    FILE *arquivo;
    int numero;

    // Abre o arquivo no modo de leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Inicializa os tamanhos dos vetores
    *tamanho1 = 0;
    *tamanho2 = 0;

    int sequenciaAtual = 1; // Flag para identificar a sequência atual

    // Lê sequências do arquivo e armazena nos vetores apropriados
    while (fscanf(arquivo, "%d", &numero) == 1) {
        if (sequenciaAtual == 1) {
            vetor1[*tamanho1] = numero;
            (*tamanho1)++;
        } else {
            vetor2[*tamanho2] = numero;
            (*tamanho2)++;
        }

        if (*tamanho1 >= TAMANHO_MAXIMO) {
            printf("Erro: Tamanho máximo do vetor1 atingido.\n");
            exit(1);
        }

        if (*tamanho2 >= TAMANHO_MAXIMO) {
            printf("Erro: Tamanho máximo do vetor2 atingido.\n");
            exit(1);
        }

        // Lê uma quebra de linha para separar as sequências
        fscanf(arquivo, "\n");

        // Troca para a próxima sequência
        sequenciaAtual = 3 - sequenciaAtual; // Alternância entre 1 e 2
    }

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para apresentar um vetor na tela
void apresentarVetor(int vetor[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    // Nome do arquivo contendo as sequências
    char nomeArquivo[] = "sequencias.txt";

    // Vetores para armazenar as sequências
    int vetor1[TAMANHO_MAXIMO];
    int vetor2[TAMANHO_MAXIMO];

    // Tamanhos dos vetores
    int tamanho1, tamanho2;

    // Chama a função para ler e armazenar as sequências nos vetores
    lerEArmazenarSequencias(nomeArquivo, vetor1, vetor2, &tamanho1, &tamanho2);

    // Apresenta os vetores na tela
    printf("Sequência 1:\n");
    apresentarVetor(vetor1, tamanho1);

    printf("Sequência 2:\n");
    apresentarVetor(vetor2, tamanho2);

    return 0;
}