#include <stdio.h>
#include <string.h>

int main()
{

    char p1[14], p2[14], p3[14];

    fgets(p1, 14, stdin);
    fgets(p2, 14, stdin);
    fgets(p3, 14, stdin);

    if (strcmp(p1, "vertebrado\n")==0)
    {
        if (strcmp(p2, "ave\n")==0)
        {
            if (strcmp(p3, "carnivoro\n")==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (strcmp(p3, "onivoro\n")==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if (strcmp(p2, "inseto\n")==0)
        {
            if (strcmp(p3, "hematofago\n")==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (strcmp(p3, "hematofago\n")==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
       
    }
    

    return 0;
}
