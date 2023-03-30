#include <stdio.h>

int main()
{
    int n, a, b, i;
    float c;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        if(b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            c = (float) a / b;
            printf("%.1f\n", c);
        }
        
    }
    return 0;
}
