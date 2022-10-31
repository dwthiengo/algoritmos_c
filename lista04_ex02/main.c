#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 20;
    int Vetor[tam],numPar = 0, numImpar =0, numMaior50 =0, numMenor7=0;

    for (int i = 0; i<tam; i++) {
        printf("Insira o elemento %d do vetor: ", (i+1));
        scanf("%d", &Vetor[i]);
    }

    for(int i = 0; i<tam; i++){

        if(Vetor[i] % 2 == 0) {
            numPar ++;
        }

        if(Vetor[i] % 2 != 0) {
            numImpar++;
        }

        if(Vetor[i] > 50) {
            numMaior50++;
        }
        if(Vetor[i] < 7) {
            numMenor7++;
        }
    }

    printf("Numeros Pares: %d \n", numPar);
    printf("Numeros Impares: %d \n", numImpar);
    printf("Numeros Maiores que 50: %d\n", numMaior50);
    printf("Numeros Menores que 7: %d\n", numMenor7);
}

