#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];
    int i, numEntre0e100=0 , numEntre101e200=0 , numMaior200=0;

    for (int i=0; i<20; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%i", &vetor[i]);

    }
    for(i = 0; i < 20; i++)
    {
        if (vetor[i] > 0 && vetor[i] <= 100){
            numEntre0e100++;
        }else if (vetor[i] >= 101 && vetor[i] <= 200){
            numEntre101e200++;
        }else if (vetor[i] > 200){
            numMaior200++;
            }
        }
    printf("%d numeros estao entre 0 e 100.\n" , numEntre0e100);
    printf("%d numeros estao entre 101 e 200.\n" , numEntre101e200);
    printf("%d numeros sao maiores que 200." , numMaior200);
}
