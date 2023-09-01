//the.shoaib2
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3 )
    {
        printf("The largest number is: %d", num1);
    }
    if (num2 > num1 && num2 > num3 )
    {
        printf("The largest number is: %d", num2);
    }
    if (num3 > num2 && num3 > num1 )
    {
        printf("The largest number is: %d", num3);
    }
    
   
    // largest = num1;
    // if (num2 > largest) {
    //     largest = num2;
    // }
    // if (num3 > largest) {
    //     largest = num3;
    // }
    
    // printf("The largest number is: %d", largest);
    
    return 0;
}
