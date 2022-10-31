#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [100];
    int i=1;

    printf("Insira seu nome: ");
    scanf("%s", nome);

    do {
     printf("O seu nome e %s\n", nome);
     i = i + 1;
    }while (i <= 10);


    return 0;
}
