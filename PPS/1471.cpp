// the.shoaib2
#include <stdio.h>
int main()
{
    int a, b, t, r;
    
    while (scanf("%d %d", &a, &b) != EOF)
    {

        if (a == b)
        {
            printf("*\n");
            break;
        }
        else
        {
            printf("\n");
        }

        int arr[a + 1] = {0}; // initialize array to 0
        for (int i = 1; i <= b; i++)
        {
            scanf("%d", &t);
            arr[t] = 1;
        }
        int r = 0; // counter for number of volunteers who dt not return
        for (int i = 1; i <= a; i++)
        {
            if (!arr[i])
            {                     // if volunteer dt not return
                printf("%d ", i); // print their t
                r++;
            }
        }
    }
    return 0;
}
