#include <stdio.h>

int main()
{
 double A,B,C,T,Ci,Q,R,TR,pi=3.14159;

scanf("%lf %lf %lf", &A, &B, &C);

    T = (A*C)/2;
    Ci = (C*C)*pi;
    TR = ((A+B)*C)/2;
    Q = B*B;
    R = A*B;
printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",T, Ci, TR, Q, R);

    return 0;
}
