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
    p = 2 * (l1 + l2);

    printf("Area = %.2f\n", a);
    printf("perimetro = %.2f\n", p);

    return 0;
}

// .\LeituraDimensoes\LeituraDimensoes.exe