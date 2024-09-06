// 46
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    

    int count = 0;
    for (int i = 0; i < n; ++i)
        count += arr[i];
    

    int A = count / 2 + 1;
    vector<int> V;
    int B = arr[0];
    V.push_back(1); 
    for (int i = 1; i < n; ++i)
    {
        if (arr[0] >= 2 * arr[i])
        {
            V.push_back(i + 1);
            B += arr[i];
        }
    }

    if (B >= A)
    {
        cout << V.size() << endl;
        for (int i : V)
            cout << i << " ";
        
        cout << endl;
    }
    else
    
        cout << 0 << endl;
    

    return 0;
}
