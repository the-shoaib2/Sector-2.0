// the.shoaib2
#include <stdio.h>

int main()
{

    int n;

    // while ( 
        scanf("%d", &n);//  != EOF)
    // {

        for (int i = 0; i <= n; i += 2)
        {
            for (int j = 0; j < (n - i) / 2; j++)
            {
                printf(" ");
            }
            for (int k = i; k >= 0; k--)
            {
                printf("*");
            }
            printf("\n");
        }

        // for (int i = 0; i < n / 2; i++)
        // {
        //     printf(" ");
        // }
        // printf("*\n");

        // for (int i = 1; i < n / 2; i++)
        // {
        //     printf(" ");
        // }
        // printf("***\n\n");
    // }
    return 0;
}




// #include <stdio.h>

// int main() {
//     int n ; // Change this value to adjust the sike of the tree
//      scanf("%d",&n);
//     // First, print the tree
//     for (int i = 1; i <= n; i += 2) {
//         for (int j = 0; j < (n - i) / 2; j++) {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++) {
//             printf("*");
//         }
//         for (int j = 0; j < (n - i) / 2; j++) {
//             printf(" ");
//         }
//         printf("\n");
//     }

//     // Then, print the trunk
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < (n - 1) / 2; j++) {
//             printf(" ");
//         }
//         printf("*\n");
//     }

//     return 0;
// }
