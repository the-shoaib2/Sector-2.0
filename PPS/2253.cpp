// the.shoaib2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    while (fgets(str, 100, stdin)) {
        int upper = 0, lower = 0, digit = 0, special = 0;
        int length = strlen(str);
        if (str[length - 1] == '\n') {
            str[length - 1] = '\0';
            length--;
        }
        if (length < 6 || length > 32) {
            printf("Senha invalida.\n");
        } else {
            for (int i = 0; i < length; i++) {
                if (isupper(str[i])) {
                    upper = 1;
                } else if (islower(str[i])) {
                    lower = 1;
                } else if (isdigit(str[i])) {
                    digit = 1;
                } else {
                    special = 1;
                }
            }
            if (upper && lower && digit && !special) {
                printf("Senha valida.\n");
            } else {
                printf("Senha invalida.\n");
            }
        }
    }
    return 0;
}
