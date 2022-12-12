#include <stdio.h>

int main()
{

    double salario, novo, ajuste;

    scanf("%lf", &salario);

    if (salario >= 0 && salario <= 400.0)
    {
        ajuste = salario * 0.15;
        novo = salario + ajuste;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", novo, ajuste);
    }
    else if (salario >= 400.01 && salario <= 800.0)
    {
        ajuste = salario * 0.12;
        novo = salario + ajuste;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", novo, ajuste);
    }
    else if (salario >= 800.01 && salario <= 1200.0)
    {
        ajuste = salario * 0.10;
        novo = salario + ajuste;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", novo, ajuste);
    }
    else if (salario >= 1200.01 && salario <= 2000.0)
    {
        ajuste = salario * 0.07;
        novo = salario + ajuste;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", novo, ajuste);
    }
    else
    {
        ajuste = salario * 0.04;
        novo = salario + ajuste;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", novo, ajuste);
    }

    return 0;
}
