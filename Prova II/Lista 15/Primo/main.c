#include <stdio.h>
#include <stdlib.h>

void primo();

int main() {
    int m, p1 = 0, p2 = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior número primo menor que %d: %d\n", m, p1);
    printf("Menor número primo maior que %d: %d\n", m, p2);

    return 0;
}

void primo(int m,int *p1, int *p2)
{
    int maiorp=m-1;
    int menorp=m+1;


    while(maiorp>=2 && maiorp%2==0)
    {
        maiorp--;
    }
    while(menorp%2==0)
    {
        menorp++;
    }

    *p1=maiorp;
    *p2=menorp;

}


