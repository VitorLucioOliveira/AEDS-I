#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    printf("O dobro de %i", x);
    dobro(&x);
    printf(" eh igual a %i", x);
    return 0;
}

void dobro(int *x)
{
    *x= 2*(*x);

}
