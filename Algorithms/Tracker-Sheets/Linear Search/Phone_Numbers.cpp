#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 0, res = 0;

    cin >> n;

    char x;

    while (n--)
    {
        cin >> x;

        (x == '8') ? ++a : ++b;
    }

    int psble = b / 10;

    res += min(psble, a);

    a = res;
    b = res * 10;

    if (a != 0 && a + b >= 11)

        res += ((a + b) / 11);

    cout << res << endl;

    return 0;
}
