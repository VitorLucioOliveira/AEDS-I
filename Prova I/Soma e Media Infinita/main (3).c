#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, soma =0;
    int c=0;

    printf("\n\nmedia dos valores [digita 0 pra sair]\n");
    printf("\n digite um valo: ");
    scanf ("%f",&x );

    while(x !=0){

        soma+=x;
        c++;
        printf("\n digite valor: ");
        scanf ("%f",&x );
    }

    float media= soma/c;

    if(c>0) printf("\n soma= %f, media= %f\n\n", soma, media);
    else printf ("\n Bye\n\n");

    return 0;
}
