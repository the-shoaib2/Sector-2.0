//the.shoaib2
#include<stdio.h>
int main()
{
   int n;
    scanf("%d",&n);
    if(n==1)
        printf("I hate it");
    else if(n>1)
        printf("I hate that");
    for(int i=2; i<n; i++)
    {

        if(i%2==1 && i!=n)
            printf(" I hate that");

        else if(i%2==0 && i!=n)
            printf(" I love that");
    }
    if(n%2==0 && n>1)
        printf(" I love it");
    else if(n>1)
        printf(" I hate it");

    return 0;
}