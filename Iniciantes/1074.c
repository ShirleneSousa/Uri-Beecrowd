#include <stdio.h>

int main(){

    int n, x, i=0;
    scanf("%d", &n);
    while(i<n){
        scanf("%d", &x);
        if(x == 0){
            printf("NULL\n");
        }
        else if(x<0){
            if(x%2 == 0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
        else{
             if(x%2 == 0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        i++;
    }
    return 0;
}
