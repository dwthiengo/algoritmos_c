#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor1[10], Vetor2[10], VetorResult[10], i;

    for (i = 0; i<10; i++) {
        printf("Insira o elemento %d do vetor 1: ", (i+1));
        scanf("%d", &Vetor1[i]);
    }
    for (i = 0; i<10; i++) {
        printf("Insira o elemento %d vetor 2: ", (i+1));
        scanf("%d", &Vetor2[i]);
    }
    for (i = 0; i<10; i++) {
        VetorResult[i] = Vetor1[i] + Vetor2[i];
        printf("Elemento %d do vetor resultante: %d\n", (i+1), VetorResult[i]);
    }
    return 0;
}

