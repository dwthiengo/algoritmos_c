#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int anoNascimento , anoAtual , diferencaAnos , idadeAnos , idadeMeses , idadeSemanas , idadeDias;

    printf("Insira o ano de seu nascimento: ");
    scanf("%d" , &anoNascimento);
    printf("Insira o ano atual: ");
    scanf("%d" , &anoAtual);
    diferencaAnos = anoAtual - anoNascimento;
    idadeAnos = diferencaAnos;
    idadeMeses = diferencaAnos * 12;
    idadeSemanas = diferencaAnos * 52;
    idadeDias = diferencaAnos * 365;
    printf ("Considerando seu ano de nascimento, voce tem: \n %d anos ou \n %d meses ou \n %d semanas ou \n %d dias" , idadeAnos, idadeMeses , idadeSemanas , idadeDias);

    return 0;
}
