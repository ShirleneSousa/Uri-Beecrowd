#include <stdio.h>

int main(){

int n, nhora;
float valor, salario;

scanf("%d %d %f", &n, &nhora, &valor);

salario = nhora*valor;

printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, salario);

return 0;
}
