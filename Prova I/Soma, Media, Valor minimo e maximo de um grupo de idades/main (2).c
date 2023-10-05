#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("\n Soma, Media, Valor minimo e maximo de um grupo de idades");


    int c=0;
    int idade, soma=0, maior=0, menor=150;


    while (c<10)
    {

    do
    {
    printf("\n digite um valor ai: ");
    scanf("%i",&idade);
    if (idade<0 || idade>150)
        printf(" valor invalido54\n\n");
    }
    while(idade<0 || idade>150);


    c++;//c = c+1
    soma+= idade;// soma= soma + x

    if(idade>maior) maior= idade;

    if(idade<menor) menor=idade;
    }




    printf("\n\t O valor ai oh: %i\n\n", soma);

    float media= (float)soma/c;

    printf("\n\t A media ai oh: %f\n", media);

    printf("\n\t maior valor ai oh:%i \n", maior);

    printf("\n\t menor valor ai oh:%i \n\n", menor);



return 0;
}
