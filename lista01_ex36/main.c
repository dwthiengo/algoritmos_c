#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salarioMinimo , salarioFuncionario , razao;

    printf("Insira o valor do salario minimo atual (em reais): ");
    scanf("%f" , &salarioMinimo);
    printf("Insira o valor do salario do funcionario (em reais): ");
    scanf("%f" , &salarioFuncionario);
    razao = salarioFuncionario / salarioMinimo;
    printf("Considerando o valor atual do salario minimo, o funcionario recebe aproximadamente %.2f salarios minimos" , razao);

    return 0;
}
