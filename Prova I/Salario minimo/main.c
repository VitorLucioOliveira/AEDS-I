#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const flag = 0;
int main()
{
    printf("Reajuste de Salario!\n\n");

    //Variaveis
    float menor=1000, maior=2000, c=0;
    float soma=0;
    float salario, total;

    printf("\n [Coloque 0 para sair] \n Salario: ");
    scanf(" %f",&salario);



    while(salario!= flag)
        {

            if(salario<1000)
            {
                salario= salario*1.10;
                printf("\n 10%% de reajuste");
                soma+=salario;
            }

            if(salario>=2000)
            {
                salario= salario*1.07;
                printf("\n 7%% de reajuste ");
                soma+= salario;
            }
            if (salario>=1000 && salario<2000)
            {
                salario= salario*1.08;
                printf("\n 8%% de reajuste");
                soma+= salario;

            }



        printf("\n\n Valor Final:%4.f", salario);
        printf("\n----------------------------\n");

        c++;

        printf("\n\n Salario: ");
        scanf("%f",&salario);

            }

        total=soma/c;
        printf("\n\n MEDIA TOTAL DOS SALARIOS:%f\n\n", total);


    return 0;
}
