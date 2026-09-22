#include <stdio.h>

int main(void)
{
    float v1, v2, soma, div, mult, sub;

    printf("Valor v1: ");
    if (scanf("%f", &v1) != 1)
    {
        return 1;
    }

    printf("Valor v2: ");
    if (scanf("%f", &v2) != 1)
    {
        return 1;
    }

    soma = v1 + v2;
    mult = v1 * v2;
    sub = v1 - v2;

    printf("Soma: %.2f\n", soma);
    printf("Multiplicacao: %.2f\n", mult);
    printf("Subtracao: %.2f\n", sub);
    if (v2 != 0.0f)
    {
        div = v1 / v2;
        printf("Divisao: %.2f\n", div);
    }
    else
    {
        printf("Divisao: impossivel dividir por zero\n");
    }

    return 0;
}