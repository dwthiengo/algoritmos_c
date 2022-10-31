#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nivel;
    int quantidadeAulas;
    float salario1 , salario2 , salario3;

    printf("Insira o nivel do professor: ");
    scanf("%c" , &nivel);

    if (nivel != '1' && nivel != '2' && nivel != '3')
        printf("Codigo invalido");
    else{
    printf("Insira a quantidade de aulas dadas pelo professor: ");
    scanf("%d" , &quantidadeAulas);

    salario1 = 12 * quantidadeAulas * 4.5;
    salario2 = 17 * quantidadeAulas * 4.5;
    salario3 = 25 * quantidadeAulas * 4.5;

    if (nivel == '1')
        printf("O salario do professor e igual a %.2f reais" , salario1);
    else if (nivel == '2')
        printf("O salario do professor e igual a %.2f reais" , salario2);
    else if (nivel == '3')
        printf("O salario do professor e igual a %.2f reais" , salario3);

    }

    return 0;
}
