#include <stdio.h>

int main()
{

    double i = 0.0, j = 1.0;
    int n = 0, x = 0;
    while (x < 11)
    {
        while (n < 3)
        {
            if (x == 0 || x == 5 || x == 10)
            {
                printf("I=%.0lf J=%.0lf\n", i, j);
                j += 1;
                n++;
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n", i, j);
                j += 1;
                n++;
            }
        }
        n = 0;
        i += 0.2;
        j = 1.0 + i;
        x++;
    }
    return 0;
}
