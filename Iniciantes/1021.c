#include <stdio.h>

int main()
{
    double n;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0, m6 = 0;
    scanf("%lf", &n);
    n+=0.001;
    while (n >= 100.0)
    {
        n -= 100.0;
        n1++;
    }
    while (n >= 50.0)
    {
        n -= 50.0;
        n2++;
    }
    while (n >= 20.0)
    {
        n -= 20.0;
        n3++;
    }
    while (n >= 10.0)
    {
        n -= 10.0;
        n4++;
    }
    while (n >= 5.0)
    {
        n -= 5.0;
        n5++;
    }
    while (n >= 2.0)
    {
        n -= 2.0;
        n6++;
    }
    while (n >= 1.0)
    {
        n -= 1.0;
        m1++;
    }
    while (n >= 0.50)
    {
        n -= 0.50;
        m2++;
    }
    while (n >= 0.25)
    {
        n -= 0.25;
        m3++;
    }
    while (n >= 0.10)
    {
        n -= 0.10;
        m4++;
    }
    while (n >= 0.05)
    {
        n -= 0.05;
        m5++;
    }
    while (n >= 0.01)
    {
        n -= 0.01;
        m6++;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n1);
    printf("%d nota(s) de R$ 50.00\n", n2);
    printf("%d nota(s) de R$ 20.00\n", n3);
    printf("%d nota(s) de R$ 10.00\n", n4);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n6);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m2);
    printf("%d moeda(s) de R$ 0.25\n", m3);
    printf("%d moeda(s) de R$ 0.10\n", m4);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m6);

    return 0;
}
