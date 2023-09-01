//the.shoaib2
#include<stdio.h>
#include <math.h>
int main()
{
 double a, b, c, x;
 scanf("%lf %lf %lf", &a, &b, &c);

 if((pow(b,2) - 4 * a * c) < 0 || a == 0)
   {
     printf("Impossivel calcular\n");
   }else{
        x = sqrt(pow(b,2) - 4 * a * c);
        printf("R1 = %.5lf\n", ((-b + x) / (2 * a)));
        printf("R2 = %.5lf\n",((-b - x) / (2 * a)));
    }
 return 0;
}