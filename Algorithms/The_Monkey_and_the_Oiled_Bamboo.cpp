//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> Arr(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> Arr[i];

        int max = 0, res;

        for (int i = 1; i <= n; i++)
        {
            if (Arr[i] - Arr[i - 1] > max)
                max = Arr[i] - Arr[i - 1];
        }

        res = max;

        for (int i = 1; i <= n; i++)
        {
            if (Arr[i] - Arr[i - 1] == max)
                max--;
            else if (Arr[i] - Arr[i - 1] > max)
            {
                res++;
                break;
            }
        }

        cout << "Case " << ++count << ": " << res << endl;
    }

    return 0;
}
