//https://atcoder.jp/contests/dp/tasks/dp_c

#include <bits/stdc++.h>
using namespace std;
const int N = 50e5 + 10;
int Arr[N];
int DP[N];
int Maximum(int n)
{
    if (n <= 1)
        return n;
    if (DP[n] != -1)
        return DP[n];

    return DP[n] = n;
}
int main()
{
    memset(DP, -1, sizeof(DP));
    int n = 10;
    cin >> n;


    for (int i = 0; i < n; i++) 
    {
        cin >> Arr[i];
    }
    cout << Maximum(n)<<endl;
    return 0;
}