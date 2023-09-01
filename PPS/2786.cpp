// the.shoaib2
#include <stdio.h>
 
int main() { 
    int L, C, A, B;
    scanf("%d %d", &L, &C);
    A = (L * C) + ((L - 1) * (C - 1));
    B = ((L - 1) * 2) + ((C - 1) * 2);
    printf("%d\n", A);
    printf("%d\n", B);
    return 0;
}