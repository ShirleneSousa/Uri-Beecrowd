#include <stdio.h>

int main()
{

    int n, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, cont7 = 0;

    scanf("%d", &n);
    printf("%d\n", n);
    while (n >= 100)
    {
        n -= 100;
        cont1++;
    }

    while (n >= 50)
    {
        n -= 50;
        cont2++;
    }
    while (n >= 20)
    {
        n -= 20;
        cont3++;
    }
    while (n >= 10)
    {
        n -= 10;
        cont4++;
    }
    while (n >= 5)
    {
        n -= 5;
        cont5++;
    }
    while (n >= 2)
    {
        n -= 2;
        cont6++;
    }
    while (n >= 1)
    {
        n -= 1;
        cont7++;
    }

    printf("%d nota(s) de R$ 100,00\n", cont1);
    printf("%d nota(s) de R$ 50,00\n", cont2);
    printf("%d nota(s) de R$ 20,00\n", cont3);
    printf("%d nota(s) de R$ 10,00\n", cont4);
    printf("%d nota(s) de R$ 5,00\n", cont5);
    printf("%d nota(s) de R$ 2,00\n", cont6);
    printf("%d nota(s) de R$ 1,00\n", cont7);

    return 0;
}
