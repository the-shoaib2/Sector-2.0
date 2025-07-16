#include <stdio.h>


//  • Starts with 'a' or 'b'
//  • Followed by one or more 'c'
//  • Ends with exactly one 'd'


int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Check first character
    if (str[0] != 'a' && str[0] != 'b') {
        printf("Invalid\n");
        return 0;
    }

    // At least one 'c' required after 'a' or 'b'
    i = 1;
    int c_count = 0;
    while (str[i] == 'c') {
        c_count++;
        i++;
    }

    if (c_count == 0  str[i] != 'd'  str[i+1] != '\0') {
        printf("Invalid\n");
    } else {
        printf("Valid\n");
    }

    return 0;
}