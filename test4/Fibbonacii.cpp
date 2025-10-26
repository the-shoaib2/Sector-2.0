#include<stdio.h>

// Bottom Up Approach
int fib(int n){

    int arr[n + 1];

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("Fibonacci of %d is %d\n", i, arr[i]);
    }
    return arr[n];
}


int main()
{

    int n ;
    scanf("%d", &n);
   
    printf("%d\n", fib(n));


    return 0;
}
