// 58
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int Arr[100][100];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> Arr[i][j];
            }
        }
        for (int i = n; i < 2 * n - 1; i++)
        {
            for (int j = 0; j < 2 * n - 1 - i; j++)
            {
                cin >> Arr[i][j];
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j <= i; j++)
        //     {
        //         cout << Arr[i][j]<< " ";
        //     }
        //     cout << endl;
        // }
        // for (int i = n; i < 2 * n - 1; i++)
        // {
        //     for (int j = 0; j < 2 * n - 1 - i; j++)
        //     {
        //         cout << Arr[i][j]<< " ";
        //     }
        //     cout << endl;
        // }

    }

    return 0;
}
/*

#include <iostream>
using namespace std;

int maxBanana(int M[1020][1020], int n) {
    int i, j;

    for(i = 2*n-2; i>=n; --i)
        for(j = i-n+1; j<=n; ++j)
            M[i][j] += (M[i+1][j]>=M[i+1][j+1] ? M[i+1][j] : M[i+1][j+1]);
    for(; i; --i)
        for(j = n-i+1; j<=n; ++j)
            M[i][j] += (M[i+1][j-1]>=M[i+1][j] ? M[i+1][j-1] : M[i+1][j]);

    return M[1][n];
}

int main() {
    int test, t = 1, n, k, M[1020][1020];
    register int i, j;

    for(scanf("%d", &test); t<=test; ++t) {
        scanf("%d", &n);

        for(i = 1; i<=n; ++i) {
            for(k = n-i, j = 1; j<=k; ++j)
                M[i][j] = 0;
            for(; j<=n; ++j)
                scanf("%d", &M[i][j]);
            M[i][j] = 0;
        }

        for(; i<=2*n-1; ++i) {
            for(k = i-n, j = 1; j<=k; ++j)
                M[i][j] = 0;
            for(; j<=n; ++j)
                scanf("%d", &M[i][j]);
            M[i][j] = 0;
        }

        printf("Case %d: %d\n", t, maxBanana(M, n));
    }

    return 0;
}
*/