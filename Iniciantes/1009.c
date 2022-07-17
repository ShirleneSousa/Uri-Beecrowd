#include <stdio.h>
#include <string.h>

int main(){

char nome[20];
double salario, montante, total;

fgets(nome, 20, stdin);
scanf("%lf %lf", &salario, &montante);

total = salario+(montante*0.15);

printf("TOTAL = R$ %.2lf\n", total);

return 0;
}
