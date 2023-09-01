// the.shoaib2
#include <stdio.h>
#define PI 3.14

int main()
{
    double v, r, d, Area, Hight;
    int tmp;
    while (scanf("%lf%lf", &v, &d) != EOF)
    {
        r = d / 2;
        Area = PI * r * r;
        Hight = v / Area;
        printf("ALTURA = %.2lf\n", Hight);
        printf("AREA = %.2lf\n", Area);
    }
    return 0;
}