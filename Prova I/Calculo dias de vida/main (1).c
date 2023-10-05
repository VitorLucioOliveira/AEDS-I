#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    printf("Dias de Vida");
    int idade;
    bool ERROR;


    do
    {
        printf("\n\nDigite a Idade: ");
        scanf("%i", & idade);

        ERROR= ((idade<0) || (idade>150));

        if (ERROR)
        puts("\n\a Valor invalido");
    }
    while (ERROR );


    int resultado= idade*365;
    printf("\nDias vividos:%i \n\n", resultado);




    return 0;
}
