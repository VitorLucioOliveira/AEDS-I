#include <stdio.h>
#include <stdlib.h>

const flag=0;
int main()
{
    puts("\n Calculo Menu\n\n");
    int operacao;

    printf(" Escolha a operacao: \n\n Multiplicacao[1] \n Soma[2] \n Divisao[3] \n Subitracao[4] \n Sair[0]: ");
    scanf("%i",& operacao);

    while(operacao!=flag){

    float x, y, resultado;
    printf("\n Valor 1: ");
    scanf("%f",& x);

    printf("\n Valor 2: ");
    scanf("%f",& y);

    switch(operacao)
    {
        case 1: resultado=  x*y;
        break;
        case 2: resultado=  x+y;
        break;
        case 3: resultado=  x/y;
        break;
        case 4: resultado=  x-y;
        break;
    }

    printf("\n Resultado=%f", resultado);


    }
  puts("\n\t\aBYE ");

    return 0;
}
