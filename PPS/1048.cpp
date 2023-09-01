//the.shoaib2
#include<stdio.h>

int main()
{
    float s;
    scanf("%f",&s);
    if(s>0 && s<=400.0)
    {
        printf("Novo salario: %.2f\n",(s+(s*.15)));
        printf("Reajuste ganho: %.2f\n",(s*.15));
        printf("Em percentual: 15 %%\n");
    }    
    else if(s<=800.0)
    {
         printf("Novo salario: %.2f\n",(s+(s*.12)));
         printf("Reajuste ganho: %.2f\n",(s*.12));
         printf("Em percentual: 12 %%\n");
    }    
    else if(s<=1200.0)
    {
        printf("Novo salario: %.2f\n",(s+(s*.10)));
        printf("Reajuste ganho: %.2f\n",(s*.10));
        printf("Em percentual: 10 %%\n");
    }    
    else if(s<=2000.0)
    {
        printf("Novo salario: %.2f\n",(s+(s*.07)));
        printf("Reajuste ganho: %.2f\n",(s*.07));
        printf("Em percentual: 7 %%\n");
    }    
    else
    {
         printf("Novo salario: %.2f\n",(s+(s*.04)));
         printf("Reajuste ganho: %.2f\n",(s*.04));
         printf("Em percentual: 4 %%\n");
    }    
    return 0;
}