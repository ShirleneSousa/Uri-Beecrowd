#include <stdio.h>

int main()
{

    int i = 1, j = 7, k, n = 0, x = 0;
    while (x < 5)
    {
        k = j + 2;
        while (n < 3)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
            n++;
        }
        n = 0;
        j = k;
        i += 2;
        x++;
    }
    return 0;
}
