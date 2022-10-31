#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casas , canal , pessoas , somaGlobo = 0 , somaSBT = 0, somaRecord= 0, somaBand= 0 , somaCultura= 0;


    printf("--------------------------------------------------------");
    printf("\n      P E S Q U I S A  D E  A U D I E N C I A        \n");
    printf("--------------------------------------------------------");

    printf("\n\nInsira o numero de casas participantes: ");
    scanf("%d" , &casas);

    for (int i=1; i<=casas; i++)
    {
        printf("\n 3 - GLOBO\n 5 - SBT \n 8 - RECORD \n 11 - BAND \n 13 - TV CULTURA \n Insira o canal assistido: ");
        scanf("%d", &canal);

        printf("\n\nInsira o numero de pessoas na casa: ");
        scanf("%d" , &pessoas);

        if (canal == 3){
            somaGlobo = somaGlobo + pessoas;
        }else if(canal == 5){
            somaSBT = somaSBT + pessoas;
        }else if(canal == 8){
            somaRecord = somaRecord + pessoas;
        }else if(canal == 11){
            somaBand = somaBand + pessoas;
        }else if(canal == 13){
            somaCultura = somaBand + pessoas;
        }

    }
        printf("\n 3 - GLOBO: %d \n 5 - SBT: %d  \n 8 - RECORD: %d  \n 11 - BAND: %d  \n 13 - TV CULTURA: %d  \n" , somaGlobo , somaSBT , somaRecord, somaBand , somaCultura);


}
