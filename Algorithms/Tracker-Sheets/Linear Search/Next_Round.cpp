#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, Val;
    cin >> n >> Val;
    vector<int> Arr(n);

    for (int i = 0; i < n; i++)
        cin >> Arr[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[Val-1] <= Arr[i] && Arr[i] > 0)
            count++;
    }
    cout << count << endl;

    return 0;
}