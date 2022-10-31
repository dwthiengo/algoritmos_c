#include <stdio.h>
#include <stdlib.h>

int main()
{
 int vetor [10];
 int soma = 0;
 for (int i=0; i<10; i++){
    printf("Insira um numero: ");
    scanf("%i", &vetor[i]);
    soma = soma + vetor[i];
 }
  printf("A soma e igual a %d" , soma);

}
