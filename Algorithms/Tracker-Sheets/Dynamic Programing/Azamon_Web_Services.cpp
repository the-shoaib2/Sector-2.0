#include <bits/stdc++.h>
using namespace std;

using namespace std;

string canSwap(string s, string c)
{
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = i + 1; j < s.size(); ++j)
        {
            string new_s = s;
            swap(new_s[i], new_s[j]);
            if (new_s < c)
            {
                return new_s;
            }
        }
    }
    return "---";
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline after integer input

    while(t--)
    {
        string s, c;
        cin >> s >> c;
        cout << canSwap(s, c) << endl;
    }

    return 0;
}