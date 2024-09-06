#include <bits/stdc++.h>

using namespace std;

int lift(int a, int b)
{
    if (a <= b)
        return b * 4 + 19;
    else
        return (2 * a - b) * 4 + 19;
}

int main()
{
    int n, a, b, c = 1;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        int res =lift(a, b);
        cout << "Case " << c << ": " << res << endl;
        c++;
    }

    return 0;
}

