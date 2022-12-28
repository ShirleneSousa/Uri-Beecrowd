#include <stdio.h>

int main()
{

    int i = 0, cont = 0,n;

    while (i < 5)
    {
        scanf("%d", &n);
        if (n%2 == 0)
        {
            cont++;
        }
        i++;
    }
    printf("%d valores pares\n", cont);
    return 0;
}
