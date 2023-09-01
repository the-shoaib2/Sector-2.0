#include <stdio.h>

int main()
{
    int n;
    // use arry
    while (scanf("%d", &n) == 1 && n > 0)
    {                        // Keep reading input until n = 0
        int scores[2] = {0}; // Initialize scores to 0
        for (int i = 0; i < n; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a > b)
                scores[0]++; // Player 1 scores a point
            else if (b > a)
                scores[1]++; // Player 2 scores a point
        }
        printf("%d %d\n", scores[0], scores[1]); // Print the scores for this test case
    }
    return 0;
}

// #include<stdio.h>

// int main()
// {
//     int n;

//    while(scanf("%d",&n)&& n!=0){
//         int x,y,c=0,c1=0;
//         while(n--){
//          scanf("%d %d",&x,&y);
//        if(x>y){
//             c++;
//         }else if(x<y){
//            c1++ ;
//         }

//         }
//          printf("%d %d\n",c,c1);
//     }
//     return 0;
// }
