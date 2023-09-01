// the.shoaib2
#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a[6];
        bool Find[7] = {false};

        for (int i = 0; i < 6; i++) {
            scanf("%d", &a[i]);

            if (a[i] < 1 || a[i] > 6 || Find[a[i]]) {
                printf("NAO\n");
                goto next;  // jump to next test case
            }

            Find[a[i]] = true;
        }

        if (a[0] + a[5] == 7 && a[1] + a[3] == 7 && a[2] + a[4] == 7)
            printf("SIM\n");
        else
            printf("NAO\n");

        next:;  // label for goto statement
    }

    return 0;
}
