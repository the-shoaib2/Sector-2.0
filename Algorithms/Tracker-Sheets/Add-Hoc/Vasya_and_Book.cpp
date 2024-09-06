#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x, y, d;
        cin >> n >> x >> y >> d;

        if (abs(y - x) % d == 0)

            cout << abs(y - x) / d << endl;

        else
        {
            ll ans = LLONG_MAX;

            if ((y - 1) % d == 0)
                ans = min(ans, (y - 1) / d + (x - 1 + d - 1) / d);

            if ((n - y) % d == 0)
                ans = min(ans, (n - y) / d + (n - x + d - 1) / d);

            if (ans == LLONG_MAX)
                cout << -1 << endl;

            else
                cout << ans << endl;
        }
    }

    return 0;
}
