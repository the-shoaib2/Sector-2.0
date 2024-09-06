#include <bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
int main()
{
    int n = 5;
    int arr[] = {5, 6, 5, 3, 8};
    
    

    return 0;
}