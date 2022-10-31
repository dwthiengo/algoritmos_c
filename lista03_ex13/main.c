#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[100];
    int i, soma=0;

    for (int i=0; i<=100; i++)
    {
        printf("\nInsira um numero inteiro: ");
        scanf("%i", &vetor[i]);
        soma = soma + vetor[i];
        if (vetor[i] < 0)
        break;
        if (i >= 1){
        printf("\nA soma do numero e igual a %d.\n" , soma);
        }

}

}
