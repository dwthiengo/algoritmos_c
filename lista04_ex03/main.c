
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VetorA[8];
    int VetorB[8];
    int i;

    for (i = 0; i<8; i++) {
        printf("Insira o elemento %d do vetor A: ", (i+1));
        scanf("%d", &VetorA[i]);
    }

    printf("\nA : ");
    for(int i=0; i<8;i++){
        printf("[%d] ", VetorA[i]);
    }

    printf("\nB : ");
    for(int i=0; i<8;i++){
        VetorB[i] = 2 * VetorA[i];
        printf("[%d] ", VetorB[i]);
    }
    }
