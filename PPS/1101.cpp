//the.shoaib2
#include <stdio.h>

int main() {
    int m, n;
    
    do {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) {
            break;
        }
        
    int sum = 0;
        
        if (m < n) {
            for (int i = m; i <= n; i++) {
                printf("%d ", i);
                sum += i;
            }
        } else {
            for (int i = n; i <= m; i++) {
                printf("%d ", i);
                sum += i;
            }
        }
        
        printf("Sum=%d\n", sum);
    } while (1);
    
    return 0;
}
