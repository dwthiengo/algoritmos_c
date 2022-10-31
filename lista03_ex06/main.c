#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];
    int soma = 0, i, media;

    for (int i=0; i<20; i++)
    {
        printf("Insira a idade %d: " , i + 1);
        scanf("%i", &vetor[i]);
        soma = soma + vetor[i];

    }
    media = soma / 20;
    printf("A media da idade e igual a %d anos.", media);

}
