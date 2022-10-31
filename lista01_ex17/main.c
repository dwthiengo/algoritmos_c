#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float temperaturaCelsius;
    float temperaturaFahrenheit;

    printf("Insira a temperatura em Celsius: \n");
    scanf("%f" , &temperaturaCelsius);
    temperaturaFahrenheit = temperaturaCelsius * 1.8 + 32;
    printf ("A temperatura do dia de hoje e %.2f Celsius ou %.2f Fahrenheit" , temperaturaCelsius , temperaturaFahrenheit );
    return 0;
}
