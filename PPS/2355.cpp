// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    int n, bra, gar;
    while (scanf("%lu", &n) != 0)
    {
        double avg_g = n / 90.0;
        bra = floor(avg_g * 1);
        gar = ceil(avg_g * 7);

        printf("Brasil %d x Alemanha %d\n", bra, gar);
    }
    return 0;
}
