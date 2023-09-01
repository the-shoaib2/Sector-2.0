// the.shoaiB2
// the.shoaib2
#include <stdio.h>
#include <string.h>
int main()
{
    char A[101], B[101], C[101];

    gets(A);
    gets(B);
    gets(C);

    printf("%s%s%s\n", A, B, C);
    printf("%s%s%s\n", B, C, A);
    printf("%s%s%s\n", C, A, B);
    printf("%.10s%.10s%.10s\n", A, B, C);

    return 0;
}