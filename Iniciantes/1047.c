#include <stdio.h>

int main()
{

    int a, b, c, d, inicio = 0, fim = 0, resul = 0, h, m;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    inicio = a * 60 + b;
    fim = c * 60 + d;

    resul = (fim - inicio);

    if (a == b && b == c && c == d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        if (resul < 0)
        {
            resul += 1440;
            h = resul / 60;
            m = resul - (h * 60);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
        else
        {
            h = resul / 60;
            m = resul - (h * 60);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
        }
        
    }

    return 0;
}
