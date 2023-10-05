#include <stdio.h>
#include <stdlib.h>

float lervalor();
void ordenaFator();
void segundomaior();


int main()
{
    float a,b,c;//variaveis

    printf("\n Fala os Valores!\n");

    a=lervalor();
    b=lervalor();
    c=lervalor();//valores lidos

    printf("\n Valores antes  %4.f %4.f %4.f", a,b,c);

    ordenaFator(&a,&b,&c);

    printf("\n Valores depois  %4.f %4.f %4.f", a,b,c);

   segundomaior(&a,&b,&c);



    return 0;
}

float lervalor()
{
    float i;
    printf("\n Valor: ");
    scanf("%f", &i);

    return i;
}

void ordenaFator(float*a,float*b,float*c)
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



void segundomaior(float*a,float*b,float*c)
{
    if(*a>*b && *a<*c){printf("\n Segundo maior valor %4.f\n\n",*a);}

    if(*b>*a && *b<*c){printf("\n Segundo maior valor %4.f\n\n",*b);}

    if(*c>*b && *c<*a){printf("\n Segundo maior valor %4.f\n\n",*c);}

}
