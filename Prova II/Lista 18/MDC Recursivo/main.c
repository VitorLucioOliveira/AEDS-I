#include <stdio.h>
#include <stdlib.h>


int mdc_recursivo(int a, int b) {

    int mdc;

    if (b == 0) {mdc=a;}

    else{mdc=mdc_recursivo(b, a % b);}// O MDC de A e B é igual  B

    return mdc;
}

int main() {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);


    printf("O MDC entre %d e %d é: %d\n", num1, num2, mdc_recursivo(num1, num2));

    return 0;
}

