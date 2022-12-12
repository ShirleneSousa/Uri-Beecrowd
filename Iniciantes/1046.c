#include <stdio.h>

int main()
{

    int x, y, resul = 0;
    scanf("%d %d", &x, &y);
    resul = y - x;
    if (x == y)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        if (resul < 0)
        {
            resul += 24;
            printf("O JOGO DUROU %d HORA(S)\n", resul);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n", resul);
        }
    }

    return 0;
}
