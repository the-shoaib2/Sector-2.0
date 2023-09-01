// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    double N1, N2, N3, N4, N, sum;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    scanf("%lf", &N);
    double Avg = ((N1 + N2 + N3 + N4) / 4.0);
    printf("Media: %.1lf\n", Avg);

    if (sum >= 7.0)
        printf("Aluno aprovado.\n");
    else if (sum >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &N);
        printf("Nota do exame: %.1f\n", N);

        if (N + sum / 2.0 > 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", (N + sum) / 2.0);
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}
