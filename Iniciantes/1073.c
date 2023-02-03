#include <stdio.h>
#include <math.h>

int main(){

    int n,i, p;
    scanf("%d", &n);

    for(i=2; i<=n; i+=2){
        p = pow(i,2);
        printf("%d^%d = %d\n",i,2,p);
    }
    return 0;
}
