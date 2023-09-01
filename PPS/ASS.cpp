// the.shoaib2
#include <stdio.h>
int main()
{
    int A = 2, B = 1, C = 3, D = 4, E = 6;
    printf("%d",   A *= A++ + ++A * B / C % D);

    return 0;
}

// A = 5, B = 7, C = 4, D = 8, E = 9
//  A. E -= A + (++C / D) * (E & 8) - (D | B)
//  B . A *= B ? (C * D) && E : (C * D) % B