// 54
#include <bits/stdc++.h>
using namespace std;

int LCS(const string &X, const string &Y)
{
    int m = X.size();
    int n = Y.size();
    int DP[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                DP[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                DP[i][j] = DP[i - 1][j - 1] + 1;
            else
                DP[i][j] = max(DP[i][j - 1], DP[i - 1][j]);
        }
    }
    return DP[m][n];
}


int main()
{
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2))
    {
        int m = s1.size();
        int n = s2.size();
        int lcs_length = LCS(s1, s2);
        cout << lcs_length << endl;
    }
    return 0;
}