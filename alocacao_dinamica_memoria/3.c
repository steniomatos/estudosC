#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definicao estrutura Veiculo
struct Veiculo {
    int numChassi;
    char marca[15];
    char modelo[15];
    double preco;
};

//Função para alocar memória para o vetor de veiculos
struct Veiculo* alocarMemoria(int n) {
    struct Veiculo* veiculos = (struct Veiculo*)calloc(n,sizeof(struct Veiculo));
    
    if(veiculos == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    
    return veiculos;
}

//Função para preencher o vetor de veiculos
void preencherVeiculos (struct Veiculo* veiculos, int n) {
    for (int i=0; i<n; i++) {
        printf("Digite os dados do veiculo %d:\n", i+1);
        printf("Numero do Chassi: ");
        scanf("%d", &veiculos[i].numChassi);
        printf("Nome da marca: ");
        scanf("%s",veiculos[i].marca);
        printf("Nome do modelo: ");
        scanf("%s",veiculos[i].modelo);
        printf("Preço: ");
        scanf("%lf", &veiculos[i].preco);
    }
}

//Função para imprimir os veiculos
void imprimirVeiculos(const struct Veiculo* veiculos, int n) {
    printf("Veiculos:\n");
    
    for (int i=0; i<n; i++) {
        printf("Veiculo nº: %d\n", i+1);
        printf("Número do chassi: %d\n", veiculos[i].numChassi);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Preço: %.2lf\n", veiculos[i].preco);
    }
}

//Função para realocar a estrutura
struct Veiculo *redimensionarMemoria (struct Veiculo *veiculos, int tamanhoOriginal, int novoTamanho) {
    veiculos = (struct Veiculo *)realloc(veiculos, novoTamanho * sizeof(struct Veiculo));

    if (veiculos == NULL){
        printf("Falha na realocação de memória. \n");
        exit(1);
    }
}

//Função para preencher os elementos adicionais
void preencherNovosVeiculos (struct Veiculo* veiculos, int n, int novoTamanho) {
    for (int i=n; i < novoTamanho; i++) {
        printf("Digite os dados do veiculo %d:\n", i+1);
        printf("Numero do Chassi: ");
        scanf("%d", &veiculos[i].numChassi);
        printf("Nome da marca: ");
        scanf("%s",veiculos[i].marca);
        printf("Nome do modelo: ");
        scanf("%s",veiculos[i].modelo);
        printf("Preço: ");
        scanf("%lf", &veiculos[i].preco);
    }
}

//Função para imprimir os veiculos após a realocação
void imprimirTodosVeiculos(const struct Veiculo* veiculos, int novoTamanho) {
    printf("Veiculos:\n");
    
    for (int i=0; i<novoTamanho; i++) {
        printf("Veiculo nº: %d\n", i+1);
        printf("Número do chassi: %d\n", veiculos[i].numChassi);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Preço: %.2lf\n", veiculos[i].preco);
    }
}

int main() {
    int n;
    
    printf("Digite o número de carros: ");
    scanf("%d", &n);
    
    //Aloca memória para o vetor de veiculos utilizando o calloc
    struct Veiculo* veiculos = alocarMemoria(n);
    
    //Preenche o vetor de veiculos
    preencherVeiculos(veiculos, n);
    
    //Imprime o vetor de veiculos
    imprimirVeiculos(veiculos, n);
    
    int novoTamanho;
    printf("Digite quantos carros adicionais serão inserido: ");
    scanf("%d", &novoTamanho);
    
    //Redimensiona memoria para o novo tamanho
    redimensionarMemoria(veiculos, n, n+novoTamanho);

    //Preenche valores dos novos veiculos
    preencherNovosVeiculos(veiculos, n, n+novoTamanho);
    
    //Imprime os Veiculos apos a realocação
    imprimirTodosVeiculos(veiculos, n+novoTamanho);

    //libera a memória alocada
    free(veiculos);
    
    return 0;
    
}
