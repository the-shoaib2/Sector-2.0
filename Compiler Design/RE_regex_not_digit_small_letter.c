#include <stdio.h>


int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();


    if (!(ch >= '0' && ch <= '9') && !(ch >= 'a' && ch <= 'z')) {
        printf("'%c' matches\n", ch);
    } else {
        printf("'%c' does NOT match\n", ch);
    }
    return 0;
}

