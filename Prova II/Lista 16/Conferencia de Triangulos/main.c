#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int const flag;

int lados();
int verifica();
int verifica2();

void apresentacao (void);
bool erro;


int main()
{
    apresentacao();

    int a,b,c, T, S;

    printf("\n Informe o valor dos Lados");

    a=lados();
    b=lados();
    c=lados();

    S=verifica(a,b,c);

   if(S!=flag)
    {

        T=verifica2(a,b,c);

        switch(T)
        {
        case 1:
            printf("\n O triangulo eh isoceles\n\n");
            break;
        case 2:
            printf("\n O triangulo eh equilatero\n\n");
            break;
        case 3:
            printf("\n O triangulo eh escaleno\n\n");
            break;
        }
    }
    else
        printf("\n\n\t bye \n\n");


    return 0;
}

//VOIDS

void apresentacao (void)
{
    printf("\n Classificacao e Apresentacao de Triangulos\n\n");
}

//VALORES

int lados()
{
    int lat;
    do{
    printf("\n\n Valor: ");
    scanf("%i",& lat);
    erro=lat<=0;

    if(erro){printf("\n\a Valor Invalido");}

    }while(erro);

    return lat;
}

//VERIFICAÇÃO DE TRIANGULO

    int verifica( int a, int b, int c)
 {
     int x;
     if (a+b>c && a+c>b && c+b>a)
     {
         printf("\n Os lados  atendem as condicoes de existencia de um triangulo\n\n");
     }

     else
     {
         printf("\n\a Os lados nao atendem as condicoes de existencia de um triangulo\n\n");

        x=0;
     }

     return x;
 }



    int verifica2(int a, int b, int c)
 {
     int x;

    if( a==b  || b==c  || a==c  )
        x=1;
    if(a==b && b==c)
       x=2;
    if(a!=b && a!=c && b!=c)
        x=3;


    return x;
 }





























