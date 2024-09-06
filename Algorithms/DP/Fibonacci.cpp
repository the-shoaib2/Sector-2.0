#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10; // 100000 1 e means after 1 which zero

int DP[N]; // Memoization array to store computed Fibonacci values

// TOP DOWN Aproch
int fib(int n)
{
    // Base case: If n is 0 or 1, return n
    if (n <= 1)
        return n;
    // Check if the Fibonacci value for n is already computd (memoization)
    if (DP[n] != -1)
        return DP[n];
    // Recursively compute and memoize the Fibonacci value for n
    return DP[n] = fib(n - 2) + fib(n - 1);
}

int main()
{
    // Initialize the memoization array with -1 values
    memset(DP, -1, sizeof(DP));

    int n;
    cin >> n;

    // BOTTOM UP APPROCH

    // DP[0]=0;
    // DP[1]= 1;
    // for (int  i = 2; i < n; i++)
    // {
    //     DP[i] = DP[i-1]+DP[i-2];
    // }

    //  Compute and print the Fibonacci value for n
    cout << fib(n) << endl;

    return 0;
}
