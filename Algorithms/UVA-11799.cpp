#include <bits/stdc++.h>
using  namespace std;

int main() {
    int T, N, current;

    cin >> T;

    for (int t = 1; t <= T; t++) {
        
        cin >> N;
        vector<int> arr(N);

        for (int i = 0; i < N; i++) 
            cin >> arr[i];
        
        int max = *max_element(arr.begin(), arr.end());

        cout << "Case " << t << ": " << max << endl;
    }

    return 0;
}