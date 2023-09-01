//the.shoaib2
#include<stdio.h>
int main()
{
    float n,s,p,k;
    s = p = k = 0;
    while(1)
    {
        scanf("%f",&n);
        if(n < 0.0 || n > 10.0)
            printf("nota invalida\n");
        else
        {
            s += n;
            p++;
            if(p==2)
            {
                s/=2;
                printf("media = %.2lf\n",s);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%f",&n);
                    if((int)n==1)
                    {
                        s = p = 0;
                        k=1;
                        break;
                    }
                    else if((int)n==2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}




// int x,j=0;
//     float n,avg,N[2];
//     while (1)
//     {
//         while (1)
//         {
//             scanf("%d",&x);
//             if (n >= 0 && n<=10)
//             {
//                  N[j] = n;
//                  j++;
//             }
//             else{
//                 printf("notainvalida\n");
//             }
//             if (j > 1)
//             break;           
//         }
//         avg = (N[0]+N[1])/2;
//         printf("media = %f\n",avg);
//         while (1)
//         {
//             scanf("%d",&x);
//             printf("novo calculo  (1-sim 2-nao\n)");
//         if (x== 1 || x==2)
//         {
//             break;
//         }
//         if (x==1 )
//         {
//             continue;
//         }
//         else break;
        
//         }
        
        
//     }
