#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void apresentacao ();
float leitor ();
void organizador (int*a, int*b, int*c);
void resultado (float b);




int main()
{
    apresentacao();

    float a, b, c;

    a=leitor();
    b=leitor();
    c=leitor();

    organizador(&a,&b,&c);



    printf("\n\n Na ordem crescente: \n %4.f %4.f %4.f\n\n",a,b,c);

    resultado(b);

    return 0;
}

void apresentacao()
{
    printf("\n\t Leitor de Valores""\n    Indico o segundo maior Valor\n");
}

void resultado(float b){

    printf("O SEGUNDO MAIOR VALOR EH: %4.f\n\n", b);

}

float leitor()
{
    float valor;


    printf("\n Valor: ");
    scanf("%f",&valor);


    return valor;
}


void organizador(int*a,int*b,int*c)
{

    float aux;

    if(*a>*b)
        {
        aux=*a;
        *a=*b;
        *b=aux;
        }

    if(*a>*c)
        {
        aux=*a;
        *a=*c;
        *c=aux;
        }

    if(*b>*c)
        {
        aux=*b;
        *b=*c;
        *c=aux;
        }


}
