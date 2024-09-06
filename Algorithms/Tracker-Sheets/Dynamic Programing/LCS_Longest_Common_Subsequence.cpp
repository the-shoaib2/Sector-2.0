// 53
#include <bits/stdc++.h>
// LCS Problem  Local 
using namespace std;

int DP[100][10005];

int LCS(const string &X, const string &Y, int m, int n)   
{

    DP[m + 1][m + 1];

    if (m == 0 || n == 0)
        return 0;
    // Dp
    if (DP[m][n] != -1)
        return DP[m][n];
 int ans = 0;
    if (X[m - 1] == Y[n - 1])
        ans = LCS(X, Y, m - 1, n - 1) + 1;
    else
        ans = max(LCS(X, Y, m, n - 1), LCS(X, Y, m - 1, n));

    return DP[m][n] = ans;
}

int main()
{
    memset(DP, -1, sizeof(DP));

    string Sequence1 = "AGGTAB";
    string Sequence2 = "GXTXAYB";
    int m = Sequence1.size();
    int n = Sequence2.size();

    cout << "LCS is : " << LCS(Sequence1, Sequence2, m, n) << endl;
    
    return 0;
}

/*
this is only DP but time complexity is n^2
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


*/