#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor1[10] , i , j;
    int tam = sizeof(Vetor1)/sizeof(int);
    int minimo, auxiliar;

    for (i = 0; i<10; i++) {
        printf("Insira o elemento %d do vetor: ", (i+1));
        scanf("%d", &Vetor1[i]);
    }

    for(int inicio=0; inicio<tam; inicio++){

        minimo = inicio;
        for(int j = inicio + 1; j < tam; j++){
            if(Vetor1[minimo] > Vetor1[j]) {
                minimo = j;
            }
        }

        auxiliar = Vetor1[inicio];
        Vetor1[inicio] = Vetor1[minimo];
        Vetor1[minimo] = auxiliar;
    }

    for(int i=0 ; i<tam ; i++) {
        printf("%d ", Vetor1[i]);
    }

}
