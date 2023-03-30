#include <stdio.h>

int main()
{

    int m, senha = 2002;
    while (1)
    {
        scanf("%d", &m);
        if (m == senha)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
