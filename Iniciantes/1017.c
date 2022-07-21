#include <stdio.h>

int main(){

int x,y; 
float litros;

scanf("%d %d", &x, &y);

litros = (x*y)/12.0;

printf("%.3f\n", litros);

return 0;
}
