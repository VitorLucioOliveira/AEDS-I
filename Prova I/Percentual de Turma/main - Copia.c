#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("Perfil da turma!\n");


   //Variaveis
   int masc=0, fem=0, alunos,  maior=0, menor=100, MI=0, AUX;
   char sexo;
   int idade;
   bool ERROR;
   float PM, PF;


   //Quantidade de Alunos

    printf("\n\n (Digite 0 para sair)\n Indique a quantidade de alunos:");
    scanf(" %i",& alunos);
    AUX= alunos;


    printf("\n\nIndique o sexo[M/F] e a Idade do Aluno:");

     while(alunos>0){


    //sexo do aluno

    do {
        printf("\n\nSexo do Aluno:");
        scanf(" %c",& sexo);
        sexo=toupper(sexo);
        ERROR=(sexo!='M' && sexo!='F');
           if(ERROR)printf("Valor invalido\a\n");
           if(sexo=='M') masc++;
           if(sexo=='F') fem++;
        }while(ERROR);

    //idade do aluno

    do{
        printf("\nIdade do Aluno:");
        scanf(" %i",& idade);

        ERROR=(idade<0 || idade>100);


        if(ERROR)printf("Valor invalido\a\n");

    else{
        if (idade>=18) MI++;
        if (idade>maior) maior= idade;
        if (idade<menor) menor= idade;
    }


    }while(ERROR);

    alunos--;
    }
    //Percentuais

    float PI;

    PM =(float)(masc*100)/(masc+fem);
    printf("\n\nPercentual de HOMENS= %2.f %% \n", PM);

    PF= (float)(fem*100)/(float)(masc+fem);
    printf("\n\nPercentual de MULHERES= %2.f %% \n", PF);

    printf("\n A maior idade: %i", maior);
    printf("\n A menor idade: %i", menor);

    PI= (float)(MI*100)/(AUX);
    printf("\n\n Percentual de Maior Idade: %2.f %%\n\n", PI);



    return 0;
}
