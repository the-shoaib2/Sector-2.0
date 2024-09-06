#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        size_t first = s.find('1');
        size_t last = s.rfind('1');

        if (first == string::npos)
            cout << "NO\n";
        else
        {
            bool allOnes = true;
            for (size_t i = first; i <= last; ++i)
            {
                if (s[i] != '1')
                {
                    allOnes = false;
                    break;
                }
            }
            if (allOnes)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
