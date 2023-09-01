// the.shoaib2
#include <stdio.h>

int main()
{
    char a[50] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", a);
    printf("<%30s>\n", a);
    printf("<%.20s>\n", a);
    printf("<%-20s>\n", a);
    printf("<%-30s>\n", a);
    printf("<%.30s>\n", a);
    printf("<%30.20s>\n", a);
    printf("<%-30.20s>\n", a);

    return 0;
}