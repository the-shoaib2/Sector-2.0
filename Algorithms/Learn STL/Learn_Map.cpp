#include <bits/stdc++.h>
using namespace std;

// void PrintMap(map<string, int> &m)
// {
//   for (auto &i : m)
//     cout << i.first << " " << i.second << endl;
// }

// int main()
// {
//   map<string, int> M;
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     string s;
//     cin >> s;
//     // M[s] = M[s] +1 ;
//     M[s]++;
//   }
//   PrintMap(M);

//   return 0;
// }





/*
//ordered map
void PrintMap(map<int, string> &Map)
{
  cout << Map.size() << endl;
  for (auto &pr : Map)
    cout << pr.first << " " << pr.second << endl;
}

int main()
{

  map<int, string> m; // ordered map
  m[3] = "abc";  //O(log(n)) for ordered 
  m[7] = "xyz";
  m[5] = "est";
  m.insert({6, "ghi"}); // alternative

  // with iterator print map
  map<int, string>::iterator it;

  for (it = m.begin(); it != m.end(); it++)
    cout << (*it).first << " " << (*it).second << endl;

  // without iterator print map    & use for not copy value its a addres
  for (auto &pr : m)
    cout << pr.first << " " << pr.second << endl;

  PrintMap(m);

  return 0;
}
*/

//unorderd map

void PrintMap(unordered_map<int, string> &Map)
{
    cout << Map.size() << endl;
    for (auto &pr : Map)
        cout << pr.first << " " << pr.second << endl;
}

int main()
{

    // Change map to unordered_map in the declaration
    unordered_map<int, string> m; // unordered map
    m[3] = "abc"; // O(1) unordered
    m[7] = "xyz";
    m[5] = "est";
    m.insert({6, "ghi"}); // alternative

    // with iterator print map
    unordered_map<int, string>::iterator it; // Change map to unordered_map
    for (it = m.begin(); it != m.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    // without iterator print map & use for not copy value it's an address
    for (auto &pr : m)
        cout << pr.first << " " << pr.second << endl;

    PrintMap(m);

    return 0;
}
