// the.shoaib2
#include <stdio.h>

int main()
{
    int n, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &Rx, &Ry);

        if (Rx >= Ax && Rx <= Bx && Rx >= Dx && Rx <= Cx && Ry >= Ay && Ry <= Dy && Ry >= By && Ry <= Cy)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
