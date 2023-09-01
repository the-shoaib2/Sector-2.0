//the.shoaib2
#include<stdio.h>
int main()
{
long int A,B,C,D;
scanf("%03ld.%03ld.%03ld",&A,&B,&C);
scanf("-%2ld",&D);
printf("%03ld\n",A);
printf("%03ld\n",B);
printf("%03ld\n",C);
printf("%02ld\n",D);
return 0;
}