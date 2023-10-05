#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
   int N, maior=0, maior2=2000;
   int presso;
   bool error;


   do{
    printf("\n Precsos\n");
    printf("\n informe o numero de mercadorias: ");
    scanf("%i",& N);
    error= N<0;

    if(error){puts("\n Valor Invalido\n");}

   }while(error);

   for(int i=1; i<=N; i++ )
   {

    printf("\n Produto %i:", i);
    scanf("%i",& presso);

    if (maior2>presso>maior) maior=presso;
    if (presso>maior2) maior2= presso;

   };

   printf("\n Maior produto abaixo de 2000: %i", maior);

    if (maior2!=presso){puts("\n Nao teve valor acima de 2000");}
    else{printf("\n Maior produto acima de 2000: %i\n\n", maior2);}




    return 0;
}
