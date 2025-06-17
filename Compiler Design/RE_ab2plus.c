#include <stdio.h>



int main() {
    char str[256];
    int i = 0, valid = 1, ab_count = 0;
    printf("Enter a string: ");
    char c;
    while (i < 255) {
        c = getchar();
        if (c == '\n' || c == EOF) {
            str[i] = '\0';
            break;
        }
        str[i++] = c;
    }
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' && str[i+1] == 'b') {
            ab_count++;
            i += 2;
        } else {
            valid = 0;
            break;
        }
    }
    if (valid && ab_count >= 2) {
        printf("Accepted: matches (ab)^2+\n");
    } else {
        printf("Rejected: does not match (ab)^2+\n");
    }
    return 0;
}
