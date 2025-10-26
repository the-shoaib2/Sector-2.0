#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;

    // return (a > b) ? a : b;
}

int LCS(char str1[], char str2[])
{
    // Find lengths of two strings
    int m = strlen(str1);
    int n = strlen(str2);

    int L[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            // Base Case
            if (i == 0 || j == 0)
                L[i][j] = 0;

            // Formula
            else if (str1[i - 1] == str2[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}

int main()
{

    char str1[100], str2[100];

    printf("Enter First String  strings:\n");
    scanf("%s", str1);
    printf("Enter Second String  strings:\n");
    scanf("%s", str2);

    printf("Length of Longest Common Subsequence is %d\n", LCS(str1, str2));

    return 0;
}