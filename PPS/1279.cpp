// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    long int year;

    while (year--)
    {
        scanf("%d", &year);
        if (year % 400 == 0 || (year % 4 == 0 &&year % 100 != 0))
        {
            printf("This is leap year.\n");
        }
    //    else if (year % 100 == 0)
    //     {
    //         printf("This is an ordinary year.\n");
    //     }
      else  if (year % 15 == 0 && year % 55 == 0)
        {
            printf("This is huluculu festival year.n");
        }
        else
        {
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
