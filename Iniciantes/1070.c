#include <stdio.h>

int main(){

    int n,i=0,x;

    scanf("%d", &n);
    x=n;
    if(n%2==0){
        x++;
        while(i<6){
        printf("%d\n",x);
        x+=2;
        i++;
    }
    }
    else{
        while(i<6){
            x+=2;
        printf("%d\n",x);
        i++;
    }
    }
    
    return 0;
}
