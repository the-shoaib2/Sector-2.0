// the.shoaib2
#include <stdio.h>
int main()
{
    int A = 2, B = 1, C = 3, D = 4, E = 6;
    printf("%d",   A*=A++ + ++A );

    int p = 4, q = 5, r = 2, s = 1, t = 7;
    printf("%d", p += ++p + q && r - s / ++t);
     
   int A = 5, B = 7, C = 4, D = 8, E = 9;
   printf("Ans: %d %d \n ",E -= A + (++C / D) * (E & D) - (D | B));
   printf("Ans: %d %d %d %d %d \n ",A,B,C,D,E);
   
   printf("Ans: %d \n ",A *= B ? (C * D) && E : (C * D) % B);

    return 0;
}

// A = 5, B = 7, C = 4, D = 8, E = 9
//  A. E -= A + (++C / D) * (E & D) - (D | B)
//  B . A *= B ? (C * D) && E : (C * D) % B