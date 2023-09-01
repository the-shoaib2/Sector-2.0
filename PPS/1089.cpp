//the.shoaib2
#include <stdio.h>

int main() {
    int n;
    while (1) 
    {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int h[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
        }
        int m = 0;
        for (int i = 1; i < n-1; i++) {
            if (h[i] > h[i-1] && h[i] > h[i+1]) {
                m++;
            } else if (h[i] < h[i-1] && h[i] < h[i+1]) {
                m++;
            }
        }
        if (h[0] > h[n-1] && h[0] > h[1]) {
            m++;
        } else if (h[0] < h[n-1] && h[0] < h[1]) {
            m++;
        }
        if (h[n-1] > h[n-2] && h[n-1] > h[0]) {
            m++;
        } else if (h[n-1] < h[n-2] && h[n-1] < h[0]) {
            m++;
        }
        printf("%d\n", m);
    }
    return 0;
}
