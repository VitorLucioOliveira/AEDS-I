#include <stdio.h>
#include <stdlib.h>
int Fibonacci();
int main()
{
    printf("\N  Termo Fibonacci\n");
    int k;
    printf("\n Qual termo vc quer?: ");
    scanf("%i",&k);



    printf("\n Esse eh o valor: %i", Fibonacci(k));

    return 0;
}


int Fibonacci(int k)
{
    if(k<=1){return 0;}
    if(k==2){return 1;}



    return Fibonacci(k-1)+ Fibonacci(k-2);


}
