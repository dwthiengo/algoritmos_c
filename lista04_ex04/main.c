#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VetorA[10], VetorB[10], VetorC[10], i;

    for (i = 0; i<10; i++) {
        printf("Insira o elemento %d do vetor A: ", (i+1));
        scanf("%d", &VetorA[i]);
    }
    for (i = 0; i<10; i++) {
        printf("Insira o elemento %d vetor B: ", (i+1));
        scanf("%d", &VetorB[i]);
    }
    for (i = 0; i<10; i++) {
        VetorC[i] = VetorA[i] + VetorB[i];
        printf("Elemento %d do vetor C: %d\n", (i+1), VetorC[i]);
    }
    return 0;
}
