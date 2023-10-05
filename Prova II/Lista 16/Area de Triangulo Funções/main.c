#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool erro;
float base();
float altura();
float calculo(float b, float h);
void apresenta(void);
void resultado ( float area);

int main()
{
    apresenta();

    float b,h, area;

    b=base();
    h=altura();

    area=calculo(b, h);

    resultado(area);


    return 0;
}

void apresenta(void)
{
    printf("\n\n Calculo da Area de um Trinagulo");
}

void resultado ( float area)
{
    printf("\n\n A area do triangulo eh %4.f", area);
}


float base()
{
    float b;
   do{

    printf("\n\n Base do trinagulo: ");
    scanf("%f", &b);
    erro= b<0;
    if (erro){printf("\n\a valor invalido");}

   }while(b<0);

    return b;
}

float altura()
{
    float h;
   do{

    printf("\n\n Altura do trinagulo: ");
    scanf("%f", &h);
    erro= h<0;
    if (erro){printf("\n\a valor invalido");}

    }while(h<0);
    return h;
}

float calculo(float b, float h)
{
    float resultado;

    resultado= b*h;

    return resultado;
}
