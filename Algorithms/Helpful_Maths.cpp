// 31
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> nums;
    stringstream ss(s);
    char delimiter = '+';
    string token;

    while (getline(ss, token, delimiter))
    {
        nums.push_back(stoi(token));
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
        {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}
