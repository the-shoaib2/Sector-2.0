//the.shoaib2
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d", &a, &b, &c);
    d = ((a + b + abs(a - b)) / 2);
    e =  ((d + c + abs(d - c)) / 2);
    printf("%d eh o maior\n", e);
    return 0;

}