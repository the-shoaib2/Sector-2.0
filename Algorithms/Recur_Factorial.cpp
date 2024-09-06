#include <bits/stdc++.h>
using namespace std;

// Function to calculate product of all elements in the array using recursion
int factorial(int *arr, int n)
{
    if (n == -1)
        return 1;
    else
        return arr[n] * factorial(arr, n - 1);
}

// Function to calculate and print the modified array
int calculation(int *arr, int product, int n)
{
    if (n == -1)
        return 1;
    int result = product / arr[n];
    arr[n] = result;
    // cout << result << " ";

    return calculation(arr, product, n - 1);
}

int main()
{
    int size = 4;
    int myArray[size] = {2, 3, 5, 7};

    int product = factorial(myArray, size - 1);

    cout << "Product : " << product << endl;

    calculation(myArray, product, size - 1);

    sort(myArray, myArray + size, greater<int>());

    cout << "Modified : ";
    for (int i = 0; i < size; ++i)
    {
        cout << myArray[i] << " ";
    }

    cout << endl;

    return 0;
}
