#include <bits/stdc++.h>
using namespace std;

int Arr[10000];

int main()
{
    int x, y;
    
    while (cin >> x)
    {
        for (int i = 0; i < x; ++i)
            cin >> Arr[i];
        
        sort(Arr, Arr + x);
        
        cin >> y;
        
        int i = 0, j = x - 1;
        int a, b;
        while (i < j)
        {
            if (Arr[i] + Arr[j] < y)
                ++i;
            else if (Arr[i] + Arr[j] == y)
            {
                a = i;
                b = j;
                ++i; --j;
            }
            else
                --j;
        }
        
        cout << "Peter should buy Arr whose prices are " << Arr[a] << " and " << Arr[b] << ".\n\n";
    }
}