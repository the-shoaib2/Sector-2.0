// the.shoaib2
#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()
{
    int r, l, balloons;
    double volume;
    scanf("%d %d", &r, &l);
    volume = ((4.0 / 3.0) * (PI * (pow(r, 3))));
    balloons = (l / (volume));
    printf("%d\n", balloons);
    return 0;
}
