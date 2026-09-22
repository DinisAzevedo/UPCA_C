#include <stdio.h>

int main(void)
{

    float l1, l2, a, p;

    printf("Altura? ");
    scanf("%f", &l1);
    printf("Largura? ");
    scanf("%f", &l2);

    // Area
    a = l1 * l2;

    // Perimetro
    p = (l1 + l2) * 2;

    printf("Area = %.2f\n", a);
    printf("Perimetro = %.2f\n", p);

    return 0;
}

/* gcc .\LeituraDimensoes\LeituraDimensoes.c -o .\LeituraDimensoes\LeituraDimensoes.exe
.\LeituraDimensoes\LeituraDimensoes.exe */