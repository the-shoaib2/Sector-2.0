//the.shoaib2
#include<stdio.h>
int main()
{
    float Perimeter, Area, A, B, C;
    scanf("%f%f%f",&A, &B, &C);
    Perimeter = A + B + C;
    Area=.5*(A + B) * C;
    if((A + B) > C && (B + C) > A && (C + A) > B)
    {
        printf("Perimetro = %.1f\n",Perimeter);
    }
    else
    {
        printf("Area = %.1f\n",Area);
    }
    return 0;
}