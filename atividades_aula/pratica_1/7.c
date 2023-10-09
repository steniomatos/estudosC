#include <stdio.h>

/**
 * Programa que recebe o valor do salário mínimo e o salário de um funcionário, imprime na tela a quantidade de salários minimos que esse funcionario recebe
*/
int main()
{
    //declaração
    float salMinimo, salario;

    printf("Programa que verifica quantos salarios minimos o funcionario ganha.\n");
    
    printf("Digite o valor do salario minimo e seu salário: \n");
    
    //recebe a cotação e o valor em dolar
    scanf("%f %f", &salMinimo, &salario);
    
    printf("O funcionário ganha %.2f salarios\n", salario/salMinimo);
    
    return 0;
}
