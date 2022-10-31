#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vetor[20];
    int i, maior8=0;

    for (int i=0; i<20; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%i", &vetor[i]);
}
    for(i = 0; i < 20; i++)
    {
    if (vetor[i] >=8){
            maior8++;
            }
        }
    printf("%d numeros sao maiores que 8." , maior8);
}


