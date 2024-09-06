// 29
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> Arr(n);

    for (int i = 0; i < n; ++i)
        cin >> Arr[i];

    sort(Arr.begin(), Arr.end());

    int count = 0;

    for (int i = 0; i < n - 1; i += 2)
    {
        count += abs(Arr[i] - Arr[i + 1]);
    }

    cout << count << endl;

    return 0;
}