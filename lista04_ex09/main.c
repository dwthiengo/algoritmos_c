#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VetorD[10] , VetorZ[10] , VetorX[10] , i , k=0;

    for(i = 0; i < 10; i++)
    {
        printf("Vetor D[%d]: ", i);
        scanf("%d", &VetorD[i]);
    }

    for(i = 0; i < 10; i++){
            if (VetorD[i] > 0){
                VetorX[k] = VetorD[i];
                k++;
            }
            else {
                VetorZ[i] = VetorD[i];
            }
        }

    printf("\n Vetor X = [ ");
    for(i = 0; i < k; i++){
        printf("%d ", VetorX[i]);
    }
    printf("]\n");


}
