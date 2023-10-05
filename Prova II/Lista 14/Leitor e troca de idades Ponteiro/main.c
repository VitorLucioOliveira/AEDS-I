#include <stdio.h>
#include <stdlib.h>


void troca();


int main()
{
    int x,y;//variaveis

    printf("\n Diga sua idade:");
    scanf( "%i",&x);
    printf("\n Diga outra idade :");
    scanf( "%i",&y);//pegando os valores

    printf("\n Idades antes %i-%i", x,y);


    troca(&x,&y);

    printf("\n Idades depois %i-%i\n\n", x,y);







    return 0;
}


void troca(int*x, int*y)
{
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;

}
