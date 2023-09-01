//the.shoaib
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int t = 1; t <= t; t++) {
        long long int n, k;
        scanf("%lld %lld", &n, &k);

        long long int div = k / (n - 1);
        long long int ex = k % (n - 1);
        long long int ans = n * div + ex;
        if (ex == 0)
            ans--;
        printf("%lld\n", ans);
    }

    return 0;
}


