// the.shoaib2
#include <stdio.h>

int main()
{
    long x, y, carry;
    while (1)
    {
        scanf("%ld %ld", &x, &y);
        if (x == 0 && y == 0)
            break;

        carry = 0;
        int carry_digit = 0;

        while (x > 0 || y > 0)
        {
            int a = x % 10;
            int b = y % 10;
            x /= 10;
            y /= 10;

            if (a + b + carry_digit >= 10)
            {
                carry++;
                carry_digit = 1;
            }
            else
            {
                carry_digit = 0;
            }
        }

        (carry == 0) ? printf("No carry operation.\n") : (carry == 1) ? printf("1 carry operation.\n")
                                                                      : printf("%ld carry operations.\n", carry) ;
    }
    return 0;
}
