#include <stdio.h>

// This program checks if a character is any character except a digit or a lowercase letter
int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    // Check if ch is NOT a digit and NOT a lowercase letter
    if (!(ch >= '0' && ch <= '9') && !(ch >= 'a' && ch <= 'z')) {
        printf("'%c' matches: any character except digit or small letter.\n", ch);
    } else {
        printf("'%c' does NOT match: it is a digit or small letter.\n", ch);
    }
    return 0;
}

// Regular expression for this logic: [^0-9a-z]
// This means: match any character except digits (0-9) and lowercase letters (a-z)
