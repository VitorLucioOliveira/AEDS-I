#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Ordem Crescente\n\n");


    int A, B, C;
    printf("Valor 1: ");
    scanf("%i", & A);

    printf("Valor 2: ");
    scanf("%i", & B);

    printf("Valor 3: ");
    scanf("%i", & C);

    int AUX;

    if (A>B)
    {
        AUX=A;
        A=B;
        B=AUX;
    }
         if (A>C)

           {

            AUX=A;
            A=C;
            C=AUX;
           }




    printf("\n Ordem crescente: %i, %i, %i \n\n", A, B, C);





    return 0;
}
