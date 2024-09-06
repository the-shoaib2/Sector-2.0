#include <bits/stdc++.h>
#include <utility> // For using pair
using namespace std;

int main() {
    vector<pair<int, string>> Vector; // Declare a vector of pairs

    // Input
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        string y;
        cin >> x >> y;
        Vector.push_back({x, y});
        // Alternative: Vector.push_back(make_pair(x, y));
    }

    // Output using range-based loop
    cout << "Elements of the vector:" << endl;
    for (const auto& pair : Vector) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
