// the.shoaib2
#include <stdio.h>
#include <limits.h>
int main()
{
    int N, min_hits = INT_MAX, answer = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min_hits)
        {
            min_hits = arr[i];
            answer = i + 1;
        }
    }

    printf("%d\n", answer);

    return 0;
}