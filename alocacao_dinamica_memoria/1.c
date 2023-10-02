#include <stdio.h>
#include <stdlib.h>

// Função para alocar memória para o array
int *alocarMemoria(int n) {
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return array;
}

// Função para preencher o array
void preencherArray(int *array, int n) {
    for (int i = 0; i < n; i++) {
        array[i] = i * 10;
    }
}

// Função para imprimir o array
void imprimirArray(int *array, int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int *array, n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    // Aloca memória usando a função
    array = alocarMemoria(n);

    // Preenche o array usando a função
    preencherArray(array, n);

    // Imprime o array usando a função
    imprimirArray(array, n);

    // Libera a memória alocada com malloc
    free(array);

    return 0;
}
