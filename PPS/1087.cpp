// the.shoaib2
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int x1, y1, x2, y2;
    
    while (true) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            break;
        }
        
        int dx = abs(x1 - x2);
        int dy = abs(y1 - y2);
        
        (dx == 0 && dy == 0) ? printf("0\n") : (dx == dy || dx == 0 || dy == 0) ? printf("1\n")
                                                                            : printf("2\n");
        // if (dx == 0 && dy == 0) {
        //     printf("0\n");
        // } else if (dx == dy || dx == 0 || dy == 0) {
        //     printf("1\n");
        // } else {
        //     printf("2\n");
        // }
    }
    
    return 0;
}
