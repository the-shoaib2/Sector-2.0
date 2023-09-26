#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

int *solution(int N, int *C, int *out_n)
{
    // Write your code here
    // Assign the size of the array to be returned into out_n variable
    // *out_n = array_size;
}

int main()
{
    int arr;
    int N;
    scanf("%d", &N);
    int i_C;
    int *C = (int *)malloc(sizeof(int) * (N));
    for (i_C = 0; i_C < N; i_C++)
        scanf("%d", &C[i_C]);
    int *out_ = solution(N, C, &arr);
    printf("%d", out_[0]);
    for (int i = 1; i < arr; i++)
        printf(" %d", out_[i]);
}