#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];
    int i, numEntre0e100=0;

    for (int i=0; i<20; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%i", &vetor[i]);

    }
    for(i = 0; i < 20; i++)
    {
        if (vetor[i] > 0 && vetor[i] < 100){
            numEntre0e100++;
            }
        }
    printf("%d numeros estao entre 0 e 100." , numEntre0e100);
}


