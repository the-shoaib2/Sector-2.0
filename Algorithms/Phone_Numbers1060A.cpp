#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, eights = 0;
    string s;

    // Input
    cin >> n >> s;

    // Count occurrences of '8'
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '8')
            eights++;
    }

    if (eights >= n / 11)
        cout << n / 11 << endl;
    else if (eights < n / 11 && n > 11)
        cout << eights << endl;
    else
        cout << 0 << endl;

    return 0;
}
