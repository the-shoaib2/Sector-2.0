#include <stdio.h>
// #include <ctype.h>

int is_whitespace(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r');
}

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    // if (isspace((unsigned char)ch)) {
    if (is_whitespace(ch)) {
        printf("'%c' is a whitespace character.\n", ch);
    } else {
        printf("'%c' is not a whitespace character.\n", ch);
    }
    return 0;
}
