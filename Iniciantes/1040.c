#include <stdio.h>

int main()
{

    double n1, n2, n3, n4, media = 0, nota, mediaF = 0;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10.0;

    if (media >= 7.0)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        scanf("%lf", &nota);
        printf("Nota do exame: %.1lf\n", nota);
        mediaF = (media + nota) / 2;
        if (mediaF >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediaF);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediaF);
        }
    }
    else
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }

    return 0;
}
