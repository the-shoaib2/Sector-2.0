#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p;
    cin >> t >> p;
    int a = p - t;

    if (a >= 32)
        a -= 32;

    if (a >= 16)
        a -= 16;

    if (a >= 8)
        a -= 8;
        
    if (a >= 4)
        a -= 4;

    if (a >= 2)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
