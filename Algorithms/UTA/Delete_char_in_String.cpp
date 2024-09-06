#include <bits/stdc++.h>
using namespace std;

int DP[1005][30005];

int fun(const string &X, const string &Y, int m, int n)
{

    DP[m + 1][m + 1];

    if (m == 0 || n == 0)
        return 0;

    if (DP[m][n] != -1)
        return DP[m][n];

    if (X[m - 1] == Y[n - 1])
        return DP[m][n] = fun(X, Y, m - 1, n - 1) + 1;

    return DP[m][n] = max(fun(X, Y, m, n - 1), fun(X, Y, m - 1, n));
}

int main()
{
    memset(DP, -1, sizeof(DP));

    string a, b;
    cin >> a >> b;
    int m = a.size();
    int n = b.size();
    int X = fun(a, b, m, n);
    int res = abs((m - X) + (n - X));
    cout << res << endl;

    return 0;
}
