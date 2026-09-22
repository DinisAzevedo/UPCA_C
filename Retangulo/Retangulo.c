// calculo do perimetro e area de um retangulo
#include <stdio.h>
void main()
{
    float l1 = 3.7;
    float l2 = 7.2;

    float a = l1 * l2;
    float p = 2 * (l1 + l2);

    printf("area = %.2f\n", a);
    printf("perimetro = %.2f\n", p);
}

/* gcc .\Retangulo\Retangulo.c -o .\Retangulo\Retangulo.exe
.\Retangulo\Retangulo.exe */