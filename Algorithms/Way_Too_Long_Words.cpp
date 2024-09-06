// 74
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    int n;
    cin >> n;

    string Arr[n];

    for (int i = 0; i < n; i++)
        cin >> Arr[i];

    for (int i = 0; i < n; i++)
    {
        string s = Arr[i];
        if (s.size() > 10)
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << "\n";

        else
            cout << s << "\n";
    }

    return 0;
}
