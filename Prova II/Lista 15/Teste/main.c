#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 24;
    int b, k;

    teste(n, &b, &k);

    printf("b = %d\n", b);
    printf("k = %d\n", k);

    return 0;
}


void teste(int n,int*b, int*k)
{
    *b=1;
    *k=n;

    while((*b)*(*k)!=n)
    {
        (*b)++;
        (*k)=n/(*b);
    }
}
