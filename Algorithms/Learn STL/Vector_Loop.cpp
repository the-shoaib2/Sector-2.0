#include <bits/stdc++.h>
using namespace std;

void Print_Vector(vector<int> &v)
{
    cout << "Size Vector : " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v(N);  //Vector inside Vector or nested vector

    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }


    for (int i = 0; i < N; i++)
    {
        Print_Vector(v[i]);
    }
}