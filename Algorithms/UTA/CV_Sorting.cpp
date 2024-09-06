#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int x = n - 3;
    
    cout << "Shortlisted Candidates :" << endl;
    for (int i = n - 1; i >= x; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
