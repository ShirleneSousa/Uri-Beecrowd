#include <stdio.h>

int main()
{

    int n, x, i = 0, c = 0, r = 0, s = 0, t = 0;
    char letra;

    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d %c", &x, &letra);
        if (letra == 'C')
        {
            c += x;
        }
        else if (letra == 'R')
        {
            r += x;
        }
        else
        {
            s += x;
        }
        t += x;
        i++;
    }

    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", c, r, s);
    printf("Percentual de coelhos: %.2lf %%\n", (c * 100.0) / t);
    printf("Percentual de ratos: %.2lf %%\n", (r * 100.0) / t);
    printf("Percentual de sapos: %.2lf %%\n", (s * 100.0) / t);
    return 0;
}
