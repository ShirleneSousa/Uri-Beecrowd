#include <stdio.h>

int main()
{

    int n, i = 0;
    double x, y, z, resul = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        resul = (2 * x + 3 * y + 5 * z) / 10.0;
        printf("%.1lf\n", resul);
        i++;
    }
    return 0;
}
