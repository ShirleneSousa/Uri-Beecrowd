#include <stdio.h>

int main()
{
    int c = 0, x;
    float n, m;
    while (1)
    {
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            m += n;
            c++;
            if (c == 2)
            {
                printf("media = %.2f\n", m / 2);
                c = 0;
                m = 0;
                while (x != 1 || x != 2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);
                    if (x == 1)
                    {
                        break;
                    }
                    else if (x == 2)
                    {
                        return 0;
                    }
                }
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
