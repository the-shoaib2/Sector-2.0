//the.shoaib2
#include<stdio.h>
int main()
{
int t, c,q,i;
float total = 0;
scanf("%d",&t);
for ( i = 0; i < t; i++)
{
scanf("%d%d",&c,&q);
switch (c)
{
case 1001:
    total = total  + (1.50*q);
    break;
case 1002:
    total = total  + (2.50*q);
    break;  
case 1003:
    total = total  + (3.50*q);
    break;
case 1004:
    total = total  + (4.50*q);
    break;
case 1005:
    total = total  + (5.50*q);
    break;
default:
    break;
  }
 }
 printf("%.2f\n",total);
    return 0;
}