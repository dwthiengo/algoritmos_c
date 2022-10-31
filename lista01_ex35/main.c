#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diagonalMaior , diagonalMenor , area;

    printf("Insira a medida da maior diagonal do losango (em cm): ");
    scanf("%f" , &diagonalMaior);
    printf("Insira a medida da menor diagonal do losango (em cm): ");
    scanf("%f" , &diagonalMenor);
    area = (diagonalMaior * diagonalMenor) / 2;
    printf ("Dadas as medidas, a area do losango e igual a %.2f centimetros quadrados." , area);

    return 0;
}
