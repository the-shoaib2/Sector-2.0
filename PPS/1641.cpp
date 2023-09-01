// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    int R, W, L, Pizzanum = 1;

    // while (scanf("%d", &R) == 1 && R != 0)
    // {
    //     scanf("%d %d", &W, &L);

    do
    {
        scanf("%d%d%d", &R, &W, &L);
        if (W == 0)
        {
            break;
        }
        double diagonal = sqrt(W * W + L * L);
        if (diagonal <= R * 2)
        {
            printf("Pizza %d fits on the table.\n", Pizzanum);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", Pizzanum);
        }
        // printf("Pizza %d %s on the table.\n", pizzaNum, hypot(W, L) <= 2 * R ? "fits" : "does not fit");
        Pizzanum++;
    } while (1);

    return 0;
}