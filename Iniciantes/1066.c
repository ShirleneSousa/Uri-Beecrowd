#include <stdio.h>

int main()
{

    int i = 0, par = 0, n, impar = 0, posi = 0, neg = 0;

    while (i < 5)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        if (n > 0)
        {
            posi++;
        }
        else if (n != 0)
        {
            neg++;
        }
        i++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
