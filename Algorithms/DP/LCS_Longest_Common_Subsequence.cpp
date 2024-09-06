#include <bits/stdc++.h>
// LCS Problem  Local 
using namespace std;

int DP[100][10005];
// Brute Force recursion & DP top-Down aproch    
//  Suuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu.... Use DP 1st time Succefullyyyyyyyy
int LCS(const string &X, const string &Y, int m, int n)   //time complexity O(m*n) brutforce recurction but use Dp O(n)
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
// Print Sequence LCS
string Print_Sequence_LCS(const string &X, const string &Y, int m, int n)
{

    if (m == 0 || n == 0)
        return "";

    if (X[m - 1] == Y[n - 1])
        return Print_Sequence_LCS(X, Y, m - 1, n - 1) + X[m - 1];
    else if(X[m-1]> Y[n-1])
      return Print_Sequence_LCS(X,Y,m-1,n);
    else
     return Print_Sequence_LCS(X,Y, m,n-1);
}

int main()
{
    memset(DP, -1, sizeof(DP));

    string Sequence1 = "AGGTAB";
    string Sequence2 = "GXTXAYB";
    int m = Sequence1.size();
    int n = Sequence2.size();

    cout << "LCS is : " << LCS(Sequence1, Sequence2, m, n) << endl;
    cout << "LCS Sequence  : " << Print_Sequence_LCS(Sequence1, Sequence2, m, n) << endl;
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






// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the length of the Longest Common Subsequence (LCS)
// int findLCSLength(string &str1, string &str2, int len1, int len2, vector<vector<int>> &dp) {
//     // Base case: if either string is empty, LCS length is 0
//     if (len1 == 0 || len2 == 0)
//         return 0;

//     // If the subproblem has already been solved, return the stored value
//     if (dp[len1][len2] != -1)
//         return dp[len1][len2];

//     // If the characters match, include this character in the LCS
//     if (str1[len1 - 1] == str2[len2 - 1])
//         return dp[len1][len2] = findLCSLength(str1, str2, len1 - 1, len2 - 1, dp) + 1;

//     // If the characters do not match, consider two cases:
//     // 1. Exclude the current character of str1
//     // 2. Exclude the current character of str2
//     // Take the maximum of these two cases
//     return dp[len1][len2] = max(findLCSLength(str1, str2, len1, len2 - 1, dp), findLCSLength(str1, str2, len1 - 1, len2, dp));
// }

// int main() {
//     string str1, str2;
//     cin >> str1 >> str2;
//     int len1 = str1.size();
//     int len2 = str2.size();

//     // Initialize the dp table with -1 to indicate unsolved subproblems
//     vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, -1));

//     // Find the length of the LCS
//     int lcsLength = findLCSLength(str1, str2, len1, len2, dp);
//     cout << lcsLength << endl;

//     return 0;
// }

// /*
// Sample Input:
// AGGTAB
// GXTXAYB

// Sample Output:
// 4
// */

// // The longest common subsequence of AGGTAB and GXTXAYB is "GTAB", which has length 4.
