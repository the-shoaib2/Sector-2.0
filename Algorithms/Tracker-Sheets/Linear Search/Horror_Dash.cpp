#include <bits/stdc++.h>
using namespace std;

int Max(int arr[], int n) {
    int ans = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    int C = 1;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Case " << C << ": " << Max(arr, n) << endl;
        C++;
    }

    return 0;
}
