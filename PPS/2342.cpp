//the.shoaib2
#include <stdio.h>

int main() {
    long int A, B, C;
    char D;
    scanf("%ld %ld %c %ld", &A, &B, &D, &C);
    long int result = 0;
    if (D == '+') {
        result = B + C;
    } else {
        result = B * C;
    }
    if (result <= A) {
        printf("OK\n");
    } else {
        printf("OVERFLOW\n");
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     long int A,B,C;
//     char D;
//     scanf("%d",&A);
//     scanf("%d %c %d", &B,&D,&C);
//  if (D == '+')
//  {
//     if (B + C <= A)
//     {
//         printf("OK\n");
//     }else{
//     printf("OVERFLOW\n");
//     }
//  }
//  else 
//  {
//     if (B * C <= A)
//     {
//      printf("OK\n");
//     }else
//     {
//      printf("OVERFLOW\n");
//     }
     
//  }

// }