#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
const flag=0;
int main()
{
    printf("\n Eleicoes do D.A!\n");

    //variaves
    int voto, c1=0,c2=0, c3=0;
    float c1p, c2p;
    bool error;


    do{
     printf("\n 1-Chapa= 1 / 2-Chapa= 2 / 3- Voto Nulo / [0- sair]\n");

    do{
    printf("\n Voto: ");
    scanf("%i",& voto);
    error= voto!=1 && voto!=2 && voto!=3 && voto!=0;

    if(error){puts("\n\a Voto Invalido");}

    }while(error);

    switch(voto){

        case 1: c1++;
        break;
        case 2: c2++;
        break;
        case 3: c3++;
        break;
    }

   }while(voto!=flag);

   printf("\n Contagem de votos\n\n Chapa 1= %i Chapa 2= %i Nulo= %i", c1,c2,c3);

   // porcentagem

   c1p= (float)c1*100/(c1+c2+c3);
   c2p= (float)c2*100/(c1+c2+c3);


   // Anuncio de resultados
   if(c1>c2){printf("\n\n Chapa 1 Vencedora!!\n Com%4.f%% dos votos\n\n", c1p);}
   if(c1<c2){printf("\n\n Chapa 2 Vencedora!!\n Com%4.f%% dos votos\n\n", c2p);}
   if(c1==c2){puts("\n\n Empate");}












    return 0;
}
