#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float primeiroNumero , segundoNumero , resultado;

    printf("Insira o primeiro numero: ");
    scanf("%f" , &primeiroNumero);
    printf("Insira o segundo numero (deve ser diferente de 0): ");
    scanf("%f" , &segundoNumero);
    resultado = primeiroNumero/segundoNumero;
    printf ("O resultado da divisao de %.2f por %.2f e igual a %.2f" , primeiroNumero , segundoNumero , resultado);

    return 0;
}
