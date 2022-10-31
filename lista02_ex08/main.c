#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char formaPagamento;
    float precoEtiqueta , preco1 , preco2 , preco3 , preco4 , precoParcelado1 , precoParcelado2;

    printf("Insira o preco de etiqueta do produto: ");
    scanf("%f" , &precoEtiqueta);

    printf("Insira a forma de pagamento: \n 1 - A vista ou cheque \n 2 - A vista no cartao \n 3 - Duas vezes sem juros \n 4 - Duas vezes com juros: ");
    scanf("%s" , &formaPagamento);

    preco1 = precoEtiqueta * 0.9;
    preco2 = precoEtiqueta * 0.85;
    preco3 = precoEtiqueta;
    preco4 = precoEtiqueta * 1.1;
    precoParcelado1 = precoEtiqueta / 2;
    precoParcelado2 = preco4 / 2;

    if (formaPagamento == '1')
     printf("O valor final do produto vai ser %.2f reais" , preco1);
    else if (formaPagamento == '2')
     printf("O valor final do produto vai ser %.2f reais" , preco2);
    else if (formaPagamento == '3')
     printf("O valor final do produto vai ser %.2f reais podendo ser pago em 2 vezes de %.2f reais" , preco3 , precoParcelado1);
    else if (formaPagamento == '4')
     printf("O valor final do produto vai ser %.2f reais sendo pago em 2 vezes de %.2f reais" , preco4  , precoParcelado2);
    else if (formaPagamento != '1' && formaPagamento != '2' && formaPagamento != '3' && formaPagamento != '4')
        printf("Codigo invalido");



    return 0;
}
