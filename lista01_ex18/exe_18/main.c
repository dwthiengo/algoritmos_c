#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int horasNormais;
    int horasExtras;
    int salarioBruto;
    float salarioLiquido;

    printf("Insira o numero de horas normais trabalhadas nesse mes:\n");
    scanf("%d" , &horasNormais);
    printf("Insira o numero de horas extras trabalhadas nesse mes:\n");
    scanf("%d" , &horasExtras);
    salarioBruto = (horasNormais * 10) + (horasExtras * 15);
    salarioLiquido = salarioBruto - (salarioBruto/10);
    printf("O salario bruto desse trabalhador e %d.00 reais e o seu salario liquido e %.2f reais " , salarioBruto , salarioLiquido);

    return 0;
}
