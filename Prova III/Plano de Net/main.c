#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    int N,  pmes=0, soma=0;
    int M_i[N];


    do{
      scanf("%i",&X);
    }while(X<1 || X>100);

     do{
      scanf("%i",&N);
    }while(N<1 || N>100);

    for(int i=0; i<N; i++)
    {
        scanf("%i",&M_i[i]);
        soma += M_i[i];
    }

    pmes= (X*N)- soma +X;

    printf("%i", pmes);








    return 0;
}
