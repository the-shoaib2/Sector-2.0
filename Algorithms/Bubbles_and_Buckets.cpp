// 28
#include <bits/stdc++.h>
using namespace std;

int A[100000], C[100000], p1, p2, s;

int count(int a, int b)
{
    if (a == b)
        return 0;

    int c = (a + b) >> 1;
    int aux = count(a, c) + count(c + 1, b);

    p1 = a;
    p2 = c + 1;
    s = 0;

    while (p1 <= c && p2 <= b)
    {
        if (A[p1] < A[p2])
            C[s++] = A[p1++];
        else
        {
            C[s++] = A[p2++];
            aux += c - p1 + 1;
        }
    }

    while (p1 <= c)
        C[s++] = A[p1++];

    while (p2 <= b)
        C[s++] = A[p2++];

    s = b - a + 1;

    memcpy(A + a, C, s * sizeof(int));

    return aux;
}

int main()
{
    int N, inversions;

    while (true)
    {
        cin >> N;
        if (N == 0)
            break;

        for (int i = 0; i < N; i++)
            cin >> A[i];

        inversions = count(0, N - 1);

        if (inversions & 1)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }

    return 0;
}
