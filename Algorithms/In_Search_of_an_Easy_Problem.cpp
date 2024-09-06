// 75
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, r = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m == 1)
            r = 1;
    }

    if (r == 1)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
