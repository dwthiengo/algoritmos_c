#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numeroFrangos;
    int alimento;
    int chip;
    int custoTotal;

    printf("Insira o numero de frangos: \n");
    scanf("%d" , &numeroFrangos);
    chip = numeroFrangos * 4;
    alimento = numeroFrangos * 7;
    custoTotal = chip + alimento;
    printf("A granja gastara %d.00 reais para marcar todos os frangos" , custoTotal);

    return 0;
}
