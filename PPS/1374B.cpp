//the.shoaib2
#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        int ans = 0;
        scanf("%d", &n);

        if (n == 1) {
            ans = 0;
            printf("%d\n", ans);
            continue;
        }

        if (n % 3 != 0) {
            ans = -1;
            printf("%d\n", ans);
            continue;
        }

        while (n != 1) {
            if (n % 3 != 0) {
                printf("%d\n", -1);
                break;
            }

            if (n % 6 == 0)
                n /= 6;
            else
                n *= 2;

            ans++;
        }

        if (n == 1)
            printf("%d\n", ans);
    }

    return 0;
}
