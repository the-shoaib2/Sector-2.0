//the.shoaib2
#include <stdio.h>

void fun(int arr[], int n) {
    int i, j;
    
    for (i = 0, j = n - 1; i <= j; i++, j--) {
        printf("%d %d\n", arr[i], arr[j]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    fun(arr, n);

    return 0;
}
