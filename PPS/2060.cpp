//the.shoaib2
#include <stdio.h>
int main()
{
int n,i,j,t=0,k=0,l=0,m=0;
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
    scanf("%d",&j);
    if (j % 2 == 0)
        t++;
    if (j % 3 == 0)
         k++;
    if (j % 4 == 0)
        l++;
    if (j % 5 == 0)
        m++;
}
printf("%d Multiplo(s) de 2\n",t);
printf("%d Multiplo(s) de 3\n",k);
printf("%d Multiplo(s) de 4\n",l);
printf("%d Multiplo(s) de 5\n",m);

    return 0;
}