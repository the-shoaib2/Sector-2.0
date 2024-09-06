#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    int Count = 0;
    for (int i : v)
    {
        Count += w / i;
        w %= i;
    }

    cout << Count << " pin";
    if (Count != 1)
        cout << "s" << endl;

    return 0;
}