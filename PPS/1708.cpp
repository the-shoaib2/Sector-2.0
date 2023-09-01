// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    a = fabs(a - b); // the absolute value of a number.
    c = ceil(b / a); // nearest integer greater than the argument passed.
    printf("%.0lf\n", c);
    return 0;
}