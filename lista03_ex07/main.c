#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vetor[20];
    int i, maioresDeIdade=0;

    for (int i=0; i<20; i++)
    {
        printf("Insira a idade %d: " , i + 1);
        scanf("%i", &vetor[i]);

    }
    for(i = 0; i < 20; i++)
    {
        if (vetor[i] >=18){
            maioresDeIdade++;
            }
        }
    printf("%d pessoas sao maiores de idade" , maioresDeIdade);
}
