// 19
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Y, P;
    while (scanf("%d%d", &Y, &P) == 2)
    {
        vector<int> Arr(P);
        for (int i = 0; i < P; ++i)
            scanf("%d", &Arr[i]);

        int A = 0, B = 0, C = 0;
        queue<int> q;

        for (int i = 0; i < P; ++i)
        {
            while (!q.empty() && Arr[i] - q.front() + 1 > Y)
                q.pop();

            q.push(Arr[i]);

            if (q.size() > A)
            {
                A = q.size();
                B = q.front();
                C = Arr[i];
            }
        }

        printf("%d %d %d\n", A, B, C);
    }
    return 0;
}
