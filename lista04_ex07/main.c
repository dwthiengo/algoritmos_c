#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0;
    int VetorR[5], VetorS[10], VetorX[k], i, j;

    for (i = 0; i<5; i++)
    {
        printf("Insira o elemento %d do vetor R: ", (i+1));
        scanf("%d", &VetorR[i]);
    }
    for (i = 0; i<10; i++)
    {
        printf("Insira o elemento %d vetor S: ", (i+1));
        scanf("%d", &VetorS[i]);
    }
    for (i = 0; i<10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (VetorR[i] == VetorS[j])
            {
                VetorX[k] = VetorR[i];
                k++;

            }
        }

    }

    printf("\nVetor R: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", VetorR[i]);
    }
    printf("\nVetor S: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", VetorS[i]);
    }
    printf("\nVetor X: ");
    for (i = 0; i < k; i++){
        printf("%d ", VetorX[i]);
    }
    printf("\n");


}



