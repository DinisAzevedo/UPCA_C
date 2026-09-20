#include <stdio.h>

int main(void)
{

    float l1;
    float l2;

    printf("Altura? ");
    scanf("%f", &l1);

    printf("Largura? ");
    scanf("%f", &l2);

    // Area
    float a = l1 * l2;

    // Perimetro
    float p = 2 * (l1 + l2);

    printf("Area = %.2f\n", a);
    printf("perimetro = %.2f\n", p);

    return 0;
}

// .\LeituraDimensoes\LeituraDimensoes.exe