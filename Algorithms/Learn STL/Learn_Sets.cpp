
/*
int main()
{
    set<string> s;
    s.insert("buhbi");
    s.insert("egeg");
    s.insert("grthd");
    auto it = s.find("egeg");
    PrintSet(s);
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
void Print_Sets(set<string> &s)
{
    for (auto v : s)
    {
        cout << v << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    Print_Sets(s);
    int x;
    cin >> x;
    while(x--){
        string str;
        cin >> str;
        if (s.find(str) == s.end())
           cout << "Noooo"<< endl;
        else
            cout << "Yessss" << endl;

    }
    return 0;
}