// the.shoaib2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int team1 = abs((A + B) - (C + D));
    int team2 = abs((A + C) - (B + D));
    int team3 = abs((A + D) - (B + C));

    int minDif = team1;
    if (team2 < minDif) {
        minDif = team2;
    }
    if (team3 < minDif) {
        minDif = team3;
    }

    printf("%d\n", minDif);

    return 0;
}
