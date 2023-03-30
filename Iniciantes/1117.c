#include <stdio.h>

int main()
{
    int c=0;
    float n, m;
    while (1)
    {
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            m += n;
            c++;
            if(c == 2)
            {
                printf("media = %.2f\n", m/2);
                return 0;
            }
            
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
