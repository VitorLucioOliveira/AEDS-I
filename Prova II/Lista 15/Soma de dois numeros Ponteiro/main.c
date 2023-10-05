#include <stdio.h>
#include <stdlib.h>
float soma();
void lervalor();
void resposta();
int main()
{

    float *a, *b;

    printf("\n Soma de dois numeros!\n");

    lervalor(&a);
    lervalor(&b);

    resposta(&a,&b);

    return 0;
}
float soma(float *a, float *b)
{
    float resposta;
    resposta=*a+*b;
    return resposta;
}

void lervalor(float*a)
{
    printf("\n Valor :");
    scanf("%f", a);


}

void resposta(float *a, float*b)
{
     printf("\n Resposta: %4.f", soma(a,b));
}
