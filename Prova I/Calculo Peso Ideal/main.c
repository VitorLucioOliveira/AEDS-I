#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("Peso Ideal!\n");

    // Variaveis
    char sexo;
    bool ERROR;
    float altura;
    float resultado;

    // Pedido do sexo biologico para o calculo
    do{
        printf("\n Sexo [M/F]:");
        scanf(" %c",&sexo);
        sexo= toupper(sexo);// iguala maiuscula e minuscula
        ERROR= (sexo != 'M' && sexo != 'F');// impede respostas alem de masculino e feminino
     }while (ERROR);


    // Pedido de altura para o calculo
    do{
        printf("\n Digite sua altura: ");
        scanf("%f",&altura);
        ERROR= altura<0 || altura>2.50;
        if(ERROR){puts("\a\n Valor Invalido");}// invalida alturas irreais
    }while(ERROR);


    //Calculo do peso ideal para masculino e feminino
    if (sexo=='M'){resultado=altura*72.7-58;}
    else{resultado= altura*62.1-44.7;}

    printf("\n Peso Ideal: %f\n\n", resultado);


    return 0;
}
