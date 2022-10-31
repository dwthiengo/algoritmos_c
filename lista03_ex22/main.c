#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quilometrosTotais = 0 , quilometrosRodados;

   printf("--------------------------------------------------------");
    printf("\n                   QUILOMETRAGEM                 \n");
    printf("--------------------------------------------------------");

    for (int i=0; i<=4000; i++)
    {
        printf("\nInsira o numero de quilometros rodados da BR 101: ");
        scanf("%d", &quilometrosRodados);
        quilometrosTotais = quilometrosTotais + quilometrosRodados;

        printf("Quilometros rodados ate agora: %d" , quilometrosTotais);

        if (quilometrosTotais >= 4000){
            break;
        }

}

}
