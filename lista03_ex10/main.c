#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];
    int i, numPares=0;

    for (int i=0; i<20; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%i", &vetor[i]);

    }
    for(i = 0; i < 20; i++)
    {
        if (vetor[i] % 2 == 0){
            numPares++;
            }
        }
    printf("%d numeros sao pares" , numPares);
}


