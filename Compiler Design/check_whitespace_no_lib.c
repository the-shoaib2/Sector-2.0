#include <stdio.h>
// #include <ctype.h> // Library function commented out

int is_whitespace(char ch) {
    // Check for space, tab, newline, vertical tab, form feed, carriage return
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r');
}

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    // if (isspace((unsigned char)ch)) { // Library function commented out
    if (is_whitespace(ch)) {
        printf("'%c' is a whitespace character.\n", ch);
    } else {
        printf("'%c' is not a whitespace character.\n", ch);
    }
    return 0;
}
