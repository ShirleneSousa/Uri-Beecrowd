#include <stdio.h>

int main()
{

    int i = 0, cont = 0;
    double n, soma = 0;

    while (i < 6)
    {
        scanf("%lf", &n);
        if (n > 0)
        {
            cont++;
            soma += n;
        }
        i++;
    }
    soma /= cont;
    printf("%d valores positivos\n%.1lf\n", cont, soma);
    return 0;
}
