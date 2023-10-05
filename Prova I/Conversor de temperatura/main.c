#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n Conversor de Temperatura\n\n");

    printf("\n Temperatura em Celsius: ");

    float Celsius;

    scanf("%",& Celsius);

    float Farenheit=  Celsius*1.8+32;

    printf("\n Em Farenheit: %f graus\n\n", Farenheit);

    return 0;
}
