#include <bits/stdc++.h>
using namespace std;
const int N = 25e2 + 10;
vector<int> Arr(N);
int DP[N];

int LIS(int idx)
{
    if (idx == 0)
        return 1;
    if (DP[idx] != -1)
        return DP[idx];

    int ans = 1;
    for (int i = 0; i < idx; i++)
    {
        if (Arr[idx] > Arr[i])
            ans = max(ans, LIS(i) + 1);
    }

    return DP[idx] = ans;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> Arr[i];

    memset(DP, -1, sizeof(DP));

    int ans = 0;

    for (int i = 0; i < n; i++)
        ans = max(ans, LIS(i));
    
    cout << ans << endl;

    return 0;
}
