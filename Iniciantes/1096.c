#include <stdio.h>

int main()
{

    int i = 1, j, n = 0, x = 0;
    while (x < 5)
    {
        j = 7;
        while (n < 3)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
            n++;
        }
        n = 0;
        i += 2;
        x++;
    }
    return 0;
}
