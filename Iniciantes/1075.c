#include <stdio.h>

int main()
{

    int n, i = 1, resto=0, m;
    scanf("%d", &n);

    for (i=1; i<=10000; i++)
    {
        m = i / n;
        resto = i - (n * m);
        
        if (resto == 2)
        {
            printf("%d\n", i);
        }
    
    }

    return 0;
}
