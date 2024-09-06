// Large Knapsack
#include <bits/stdc++.h>
using namespace std;

int knapsack(int K, int N, int values[], int weights[])
{
    int dp[K + 1] = {0};

    for (int i = 0; i < N; ++i)
    {
        for (int w = K; w >= weights[i]; --w)
        {
            dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
        }
    }

    return dp[K];
}

int main()
{
    int K, N;
    cin >> K >> N;
    int values[N];
    int weights[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> values[i] >> weights[i];
    }

    cout << knapsack(K, N, values, weights) << endl;

    return 0;
}
