#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioFixo = 1200.00;
    float conta1 = 200.00;
    float conta2 = 120.00;
    float juros1 = conta1 * 1.02;
    float juros2 = conta2 * 1.02;
    float restoSalario;

    restoSalario = salarioFixo - juros1 - juros2;
    printf("Salario: %.2f reais \n" , salarioFixo);
    printf("Conta 1: %.2f reais \n" , conta1);
    printf("Conta 2: %.2f reais \n\n" , conta2);
    printf("Apos pagar as contas acrescidas dos juros, sobrara %.2f reais do salario de Joao. \n" , restoSalario);

    return 0;
}
