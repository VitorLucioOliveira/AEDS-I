#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, A, B, C;

    do
    {
        scanf("%i",&M);

    }
    while(M<40 || M>100);


    do{
        do
        {
            scanf("%i",&A);

        }
        while(A<1 || A>=M);

        do
        {
            scanf("%i",&B);

        }
        while(B<1  || B>=M);

    }while( B==A);


    C= M-A-B;

    printf("%i",C);

        return 0;
}
