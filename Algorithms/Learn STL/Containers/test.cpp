#include <stdio.h>

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
        printf("Invalid position");
    else {
        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
        printf("Array elements after deletion: ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }
    return 0;
}
