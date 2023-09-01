//the.shoaib2
#include <stdio.h>
#include <string.h>

int main() {
    int T, N;
    while (1) {
        scanf("%d %d", &T, &N);
        if (T == 0) break;
        int totalPoints = 3 * N;
        int matchDraw = 0;
        for (int i = 0; i < T; i++) {
            char str[100];
            int point;
            scanf("%s %d", str, &point);
            matchDraw += point;
        }
        printf("%d\n", totalPoints - matchDraw);
    }
    return 0;
}
