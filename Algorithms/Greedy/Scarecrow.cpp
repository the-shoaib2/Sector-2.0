//39
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.')
            {
                count++;
                i += 2;
            }
        }

        cout << "Case " << i << ": " << count << endl;
    }
    return 0;
}
