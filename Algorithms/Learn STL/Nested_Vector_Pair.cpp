#include <bits/stdc++.h>
using namespace std;

void Print_Vector_pair(vector<pair<int, int>> &v)
{
    cout << "Size Vector : " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int>> v;

    Print_Vector_pair(v);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        // v.push_back(make_pair(x,y));
    }
    Print_Vector_pair(v);
}