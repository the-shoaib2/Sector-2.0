// 43
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int A;
    cin >> n >> A;

    while (A--)
    {
        (n % 10 == 0)? n /= 10 : n -= 1;
    }

    cout << n << endl;
    return 0;
}
