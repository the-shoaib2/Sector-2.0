//38
#include <bits/stdc++.h>
using namespace std;

int fun(int n, int m)
{
    int a = n, b = n;

    while (b >= m)
    {
        int temp = b / m;
        a += temp;
        b = temp + (b % m);
    }

    return a;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
        cout << fun(n, m) << endl;

    return 0;
}
