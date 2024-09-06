// 34
#include <bits/stdc++.h>
using namespace std;
const int MAX_AGE = 99;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (cin >> n)
    {
        if (n == 0)
            break;

        vector<int> Arr2(MAX_AGE + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Arr2[x]++;
        }

        bool A = true;
        for (int i = 0; i <= MAX_AGE; i++)
        {
            while (Arr2[i] > 0)
            {
                if (!A)
                    cout << " ";
                cout << i;
                A = false;
                Arr2[i]--;
            }
        }
        cout << endl;
    }

    return 0;
}
