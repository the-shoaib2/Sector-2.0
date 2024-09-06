#include <bits/stdc++.h>
using namespace std;

int Profit[105];
int Weights[105];
long long int DP[105][100005];

long long int Knapsack(int i, int w)
{

    if (w == 0 || i < 0)
        return 0;

    if (DP[i][w] != -1)
        return DP[i][w];

    long long int ans = Knapsack(i - 1, w);

    if (w - Weights[i] >= 0)
        ans = max(ans, Knapsack(i - 1, w - Weights[i]) + Profit[i]);

    return DP[i][w] = ans;
}

int main()
{
    memset(DP, -1, sizeof(DP));
    int n, W;
    cin >> n >> W;
    for (int i = 0; i < n; i++)
        cin >> Weights[i] >> Profit[i];
    for (int i = 0; i < n; i++)
        cin ;

    cout << Knapsack(n - 1, W) << endl;
    return 0;
}