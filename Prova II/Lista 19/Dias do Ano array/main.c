#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int lermes();
int contadias();
void faladias();

int main()
{
    printf("\n Ver os dias do mes\n");

    int dias[]={31,28,31,30,31,30,31,31,30,31,30,31};

    int mes=lermes();

    faladias(mes,contadias(mes,dias));


    return 0;
}

int lermes()
{
    int mes;
    bool ERRO;

    do{
        printf("\n Qual mes vc quer:");
        scanf("%i",&mes);
        ERRO= mes<=0;
        if(ERRO){printf("\n\a Valor Invalido\n");}

    }while(ERRO);

    return mes;
}

int contadias(int mes, int dias[])
{
    int diacontado= dias[mes-1];


    return diacontado;

}
void faladias(int mes, int dias)
{
     printf("\n O mes %d tem %d dias\n", mes, dias);

}



























