#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [100];
    int idade;
    int diasdevida;

    printf ("Digite o seu nome: ") ;
    scanf ("%s", nome) ;
    printf ("Digite quantos anos voce tem: ") ;
    scanf ("%d" , &idade) ;
    printf("Seu nome e %s e voce ja viveu %d dias\n" , nome , diasdevida = idade * 365 ) ;
}
