#include <stdio.h>

int main()
{

    int m, n, soma = 0, i;
    while (1)
    {
        soma = 0;
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else
        {
            if (n < m)
            {
                for (i = n; i <= m; i++)
                {
                    soma += i;
                    printf("%d ", i);
                }
            }
            else
            {
                for (i = m; i <= n; i++)
                {
                    soma += i;
                    printf("%d ", i);
                }
            }
            printf("Sum=%d\n", soma);
        }
    }

    return 0;
}
