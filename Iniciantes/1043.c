#include <stdio.h>

int main()
{
    double a, b, c, area, perimetro;

    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a >= b + c) || (b >= a + c) || (c >= a + c))
    {
        area = ((a + b) * c) / 2.0;
        printf("Area = %.1lf\n", area);
    }
    else
    {
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }

    return 0;
}
