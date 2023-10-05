#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
const int T=5;


int leridade(int idades[], int T);
int somaIdades(int idades[], int t);
float mediaIdade(int soma, int t);
int pessoasAbaixo(int idades[], int t, float media);
void fala(int c, float media);




int main()
{
    int idades[T];
    int soma;
    float media;
    int c;

    leridade(idades,T);
    soma=somaIdades(idades,T);
    fala(pessoasAbaixo(idades,T,mediaIdade(soma,T)),mediaIdade(soma,T));



    return 0;
}

int leridade(int idades[],int T)
{
    int erro;

        for(int i=0; i<T; i++)
        {
            do
            {
                printf("\n Qual a idade?:");
                scanf("%i",&idades[i]);
                erro=idades[i]<=0;
                if(erro)printf("\n\a Valor Invalido\n");
            }
            while(erro);
        }



        return idades;
    }

    int somaIdades(int idades[], int t)
    {
        int soma=0;

        for(int i=0; i<t; i++)
        {
            soma+= idades[i];
        }


        return soma;

    }

    float mediaIdade(int soma, int t)
    {
        float media= (float)soma/t;


        return media;
    }


    int pessoasAbaixo(int idades[], int t,float media)
    {
        int c=0;
        for(int i=0; i<t; i++)
        {
            if(idades[i]<media)c++;
        }


        return c;
    }

    void fala(int c, float media)
    {
        printf("\n A media eh de %2.f \n Tendo %i pessoas abaixo da media\n\n\n", media, c);
    }
