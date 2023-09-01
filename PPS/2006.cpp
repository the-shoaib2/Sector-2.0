// the.shoaib2
#include<stdio.h>
int nain()
{
    int a,b,c,d,e,count,n;
    while(scanf("%d",&n)!=EOF){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        count=0;
        if(n==a)count++;
        if(n==b)count++;
        if(n==c)count++;
        if(n==d)count++;
        if(n==e)count++;
        printf("%d\n",count);
    }
    return 0;
}