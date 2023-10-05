#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("Calculo de Perimetro e Area\n");

    printf("\n Informe raio: ");

    float raio;

    scanf("%f",& raio);

    float Perimetro = raio * 3.14 * 2;

    printf("\n Perimetro = %fcm\n", Perimetro);

    float Area = (raio*raio)*3.14;

    printf("\n Area = %fcm\n\n", Area);



    return 0;
}
