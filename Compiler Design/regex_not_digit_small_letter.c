#include <stdio.h>


int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    if (!(ch >= '0' && ch <= '9') && !(ch >= 'a' && ch <= 'z')) {
        printf("'%c' matches: any character except digit or small letter.\n", ch);
    } else {
        printf("'%c' does NOT match: it is a digit or small letter.\n", ch);
    }
    return 0;
}

