//72
#include <bits/stdc++.h>
using namespace std;

const int MOD = 100000007;
const int MAX_N = 50;
const int MAX_K = 1000;

int countWays(int K, int A[], int C[], int dp[][MAX_N + 1], int idx) {
    if (K == 0) return 1;
    if (K < 0 || idx < 0) return 0;
    if (dp[K][idx] != -1) return dp[K][idx];

    int ways = 0;
    for (int i = 0; i <= C[idx]; ++i) {
        if (K - i * A[idx] >= 0) {
            ways = (ways + countWays(K - i * A[idx], A, C, dp, idx - 1)) % MOD;
        }
    }

    return dp[K][idx] = ways;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int n, K;
        cin >> n >> K;

        int A[MAX_N], C[MAX_N];
         int dp[MAX_K + 1][MAX_N + 1];
        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < n; ++i)   
            cin >> A[i];
        
        for (int i = 0; i < n; ++i) 
            cin >> C[i];
        

       

        int ways = countWays(K, A, C, dp, n - 1);
        cout << "Case " << t << ": " << ways << endl;
    }

    return 0;
}
