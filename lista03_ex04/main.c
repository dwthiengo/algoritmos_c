#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [100];
    int i=1, repeticoes;

    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("Insira um numero: ");
    scanf("%i", &repeticoes);

    do {
     printf("O seu nome e %s\n", nome);
     i = i + 1;
    }while (i <= repeticoes);


}
