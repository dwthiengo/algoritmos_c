#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float alturaPessoa , sombraPessoa , sombraPredio , razaoSombra , alturaPredio;

    printf("Insira a sua altura: ");
    scanf("%f" , &alturaPessoa);
    printf("Insira a medida da sua sombra: ");
    scanf("%f" , &sombraPessoa);
    printf("Insira a medida da sombra do predio: ");
    scanf("%f" , &sombraPredio);
    razaoSombra = sombraPredio / sombraPessoa;
    alturaPredio = razaoSombra * alturaPessoa;
    printf("Dadas as medidas, a altura da sombra e igual a %.2f  metros." , alturaPredio);

    return 0;
}
