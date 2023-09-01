//the.shoaib2
#include <stdio.h>
#include<math.h>
int main() {
    int a, b;
    
    while (scanf("%d %d", &a, &b) == 2) {
        int q = a / b;
        int r = a % b;
        
        if (r < 0) {
            r += abs(b);
            q = (a - r) / b;
        }
        
        printf("%d %d\n", q, r);
    }
    
    return 0;
}
