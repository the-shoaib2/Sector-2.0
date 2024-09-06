#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;
    vector<pair<int, int>> Pair(n);
    for (int i = 0; i < n; i++)
        cin >> Pair[i].first >> Pair[i].second;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Pair[i].first == Pair[j].second && i != j)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}