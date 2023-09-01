// the.shoaib2
#include <stdio.h>

int main() {
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF) {
        int distance = v * t * 2;
        printf("%d\n", distance);
    }
    return 0;
}
