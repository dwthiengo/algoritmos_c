#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam = 10;
    int Vetor[tam], somaMenor15=0 , numIgual5=0, numMaior15=0 ,somaMaior15 = 0;
    float media;


    for (int i = 0; i<tam; i++) {
        printf("Insira o elemento %d do vetor: ", (i+1));
        scanf("%d", &Vetor[i]);
    }

    for(int i = 0; i<tam; i++){

        if(Vetor[i] < 15) {
            somaMenor15 += Vetor[i];
        }

        else if(Vetor[i] == 15) {
            numIgual5++;
        }

        else if(Vetor[i] > 15) {
            somaMaior15 += Vetor[i];
            numMaior15++;
        }
    }

    media = somaMaior15/numMaior15;

    printf("Soma dos menores que 15: %d\n", somaMenor15);
    printf("Media dos maiores que 15: %.2f\n", media);
    printf("Contagem dos iguais a 15: %d\n", numIgual5);
}

