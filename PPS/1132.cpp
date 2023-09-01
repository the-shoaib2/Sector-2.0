//the.shoaib2
#include<stdio.h>

int main()
{
    int a ,b ,c = 0, i, temp;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
    temp = a;   //swaping
    a = b;
    b = temp;
    }
    for(i = a;i <= b;i++)
    {
        if(i%13 != 0)
        c += i;
    }
    printf("%d\n", c);

    return 0;
}