#include <stdio.h>

int main()
{

    int m, n;
    while (1)
    {
        scanf("%d %d", &m, &n);
        if (m == n)
        {
            break;
        }
        else
        {
            if (m > n)
            {

                printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }
        }
    }

    return 0;
}
