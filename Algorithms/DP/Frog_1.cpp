// 56
// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10; // 100000 1 e means after 1 which zero
// TOP DOWN Aproch
int h[n]; // Memoization array to store computed funonacci values
int DP[n];

int Forg(int i)
{
    if (i == 0)
        return 0;

    if (DP[i] != -1)
        return DP[i];

    int cost = INT_MAX;

    cost = min(cost, Forg(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1)
        cost = min(cost, Forg(i - 2) + abs(h[i] - h[i - 2]));

    return DP[i] = cost;
}

int main()
{
    memset(DP, -1, sizeof(DP));
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }
    cout << Forg(n - 1);

    return 0;
}
