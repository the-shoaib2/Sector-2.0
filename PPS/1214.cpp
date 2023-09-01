
// the.shoaib2
#include <stdio.h>

int main() {
    int T, n, i, sum, count;
    float avg, perc;
    
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &n);
        
        int arr[n];
        sum = 0;
        count = 0;
        
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        
        avg = (float) sum / n;
        
        for (i = 0; i < n; i++) {
            if (arr[i] > avg) {
                count++;
            }
        }
        
        perc = (float) count / n * 100;
        printf("%.3f%%\n", perc);
    }
    
    return 0;
}
