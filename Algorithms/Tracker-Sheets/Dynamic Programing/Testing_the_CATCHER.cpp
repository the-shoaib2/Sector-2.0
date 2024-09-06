// 49
#include <bits/stdc++.h>
using namespace std;

int DP[100][10005];

// Function to calculate the length of LCS
int LCS(const string &A, const string &B, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;

    if (A[m - 1] == B[n - 1])
        return 1 + LCS(A, B, m - 1, n - 1);
    else
        return max(LCS(A, B, m - 1, n), LCS(A, B, m, n - 1));
}

int main()
{
    vector<int> Arr;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        Arr.push_back(x);
    }

    return 0;
}
