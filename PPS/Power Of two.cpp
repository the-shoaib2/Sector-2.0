//the.shoaib2
#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,i,p,b,Bin;
    for ( i = 0; i < t; i++)
    {
        if (t > 0 && t > 1000)
            scanf("%d",&t);
        for (i = 0 ; i <= n; i++)
        {
            scanf("%d",&n);
            p = pow(2,n);
            b = p/2;
            Bin=b%2;
        }
        
            printf("%d",Bin);
    }
    
    return 0;
}