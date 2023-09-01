// the.shoaib2
#include <stdio.h>

void fun1(int n)
{
    if (n > 1)
        fun1(n - 1);
    printf("%d ", n);
}

void fun2(int n)
{
    if (n == 1)
        return;
    printf("%d ", n - 1);
    fun2(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    fun1(n);
    fun2(n);
    return 0;
}
