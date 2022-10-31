#include <stdio.h>
#include <stdlib.h>

int main()
{
   int codigo;
   float salario , aumentoSalario101  , aumentoSalario102  , aumentoSalario103 , aumentoSalario104 ;

    printf("Insira o salario em reais: ");
    scanf("%f" , &salario);
    printf("Insira o codigo do profissional: ");
    scanf("%d" , &codigo);

    aumentoSalario101 = salario * 1.1;
    aumentoSalario102 = salario * 1.2;
    aumentoSalario103 = salario * 1.3;
    aumentoSalario104 = salario * 1.4;

    if (codigo == 101)
        printf("O seu salario depois do aumento e igual a %.2f reais" , aumentoSalario101);
    else if (codigo == 102)
        printf("O seu salario depois do aumento e igual a %.2f reais" , aumentoSalario102);
    else if (codigo == 103)
        printf("O seu salario depois do aumento e igual a %.2f reais" , aumentoSalario103);
    else if (codigo != 101 && codigo != 102 && codigo != 103)
        printf("O seu salario depois do aumento e igual a %.2f reais" , aumentoSalario104);



}
