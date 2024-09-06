#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; // Number of stores

        vector<int> stores(n);
        for (int j = 0; j < n; ++j) {
            cin >> stores[j]; // Store positions
        }

        sort(stores.begin(), stores.end());

        // Michael parks at the midpoint of the store with the highest position and the store with the lowest position
        int parking_position = (stores.back() + stores.front()) / 2;

        // Calculate the total distance
        int total_distance = 0;
        for (int j = 0; j < n; ++j) {
            total_distance += abs(stores[j] - parking_position);
        }

        cout << total_distance << endl;
    }

    return 0;
}
