#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> V;
    // Normal Loop using input vector
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     V.push_back(x);
    // }
    // //Rnage base loop using input vector
    for (auto i : V)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }
    // Rnage base loop using output vector
    for (auto i : V)
    {
        cout << i << " ";
        V.pop_back();
    }

    return 0;
}



