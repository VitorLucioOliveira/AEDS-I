#include <stdio.h>
#include <stdlib.h>

void apresenta (void);
void  anuncio (float total);
float lido ();
float soma (float v1, float v2);


int main()
{
    apresenta();

    float v1,v2, total;

    v1= lido();
    v2= lido();

    total= soma(v1,v2);

    anuncio(total);

    return 0;
}

void apresenta (void)
{
    printf("\n\n Soma de dois Numeros\n");
}
void anuncio (float total)
{
    printf("\n Valor total: %4.f", total);

}


float lido ()
{
    float a;
    printf("\n Valor: ");
    scanf("%f",& a);

    return a;
}

float soma (float v1, float v2)
{
    float mais;
    mais= v1+v2;
    return mais;
}
