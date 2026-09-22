#include <stdio.h>

int main(void)
{
    float l1 = 3.7;
    float l2 = 7.2;

    float a = l1 * l2;
    float p = 2 * (l1 + l2);

    printf("area = %.2f\n", a);
    printf("perimetro = %.2f\n", p);

    return 0;
}
