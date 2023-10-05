#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n Calculo da Area de Retangulo\n\n");

    printf("\n Informe o valor da base: ");

    float base;
    scanf("%f",& base);

    printf("\n E agora o valor da altura: ");

    float altura;
    scanf("%f",& altura);

    float area= base* altura;

    printf("\nUm retangulo de base igual a %f \n", base);

    printf("\ne altura igual a %f \n", altura);

    printf("\ntem area igual a %f \n\n", area);

   return 0;
}
