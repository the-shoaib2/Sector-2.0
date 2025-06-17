#include <stdio.h>


// This program checks if the input string matches the regex (a|b)+c
// That is, one or more 'a' or 'b' characters followed by a single 'c' at the end


int main() {
    char str[256];
    while (1) {
        int i = 0, valid = 1, count = 0;
        printf("Enter : ");
        fgets(str, sizeof(str), stdin);
        int len = 0;
        while (str[len] != '\0') {
            if (str[len] == '\n') {
                str[len] = '\0';
                break;
            }
            len++;
        }
        if (len < 2) {
            printf("Rejected: does not match (a|b)+c\n");
            continue;
        }
        for (i = 0; i < len - 1; i++) {
            if (str[i] != 'a' && str[i] != 'b') {
                valid = 0;
                break;
            }
        }
        if (str[len - 1] != 'c') {
            valid = 0;
        }
        if (valid && (len - 1) >= 1) {
            printf("Accepted: matches (a|b)+c\n");
        } else {
            printf("Rejected: does not match (a|b)+c\n");
        }
    }
    return 0;
}
