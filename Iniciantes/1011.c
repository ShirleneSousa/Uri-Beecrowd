#include <stdio.h>

int main (){

double vol=0, pi=3.14159, r;

scanf ("%lf", &r);

vol = (4.0/3.0)*pi*(r*r*r);

printf ("VOLUME = %.3lf\n", vol);

return 0;
}
