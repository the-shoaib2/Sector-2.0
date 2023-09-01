//the.shoaib2
#include<stdio.h>
int main()
{ 
long long int i,A,B,sum = 0;
scanf("%lld %lld",&A, &B);
for (int i = A; i <= B ; i++)
{
    sum += i;
}
printf("%lld",sum);
    return 0;
}


// #include<stdio.h>
// int main()
// {
//    long long int a,b,n,s;

//     scanf("%lld %lld",&a,&b);

//          n=(b-a)+1;
//          s=((float)n/2)*(2*a+(n-1));
//          printf("%lld\n",s);


//     return 0;
// }