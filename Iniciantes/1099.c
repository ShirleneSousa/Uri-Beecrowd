#include <stdio.h>

int main()
{

    int n, x, y, i = 0, soma = 0, j;
    scanf("%d", &n);
    while (i < n)
    {
        soma = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            for (j = y + 1; j < x; j++)
            {
                if (j % 2 != 0)
                {
                    soma += j;
                }
            }
        }
        else
        {
            for (j = x + 1; j < y; j++)
            {
                if (j % 2 != 0)
                {
                    soma += j;
                }
            }
        }
        printf("%d\n", soma);
        
        i++;
    }
    return 0;
}
