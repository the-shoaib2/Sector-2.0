//42
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[26] = {};

    for (auto i : s)
    {
        ++arr[i - 'a'];
    }
    for (int i = 0; i < 25; ++i)
    {
        arr[i + 1] += arr[i] / 2, arr[i] &= 1;
    }
    for (int i = 25; i >= 0; --i)
    {
        while (arr[i]--)
        {
            putchar(i + 'a');
        }
    }
    return 0;
}