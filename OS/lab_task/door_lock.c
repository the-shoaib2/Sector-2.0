#include <stdio.h>
#include <ctype.h>

int main() {
    char code[100];
    int letters = 0, digits = 0, special = 0;
    scanf("%s", code);
    for (int i = 0; code[i] != '\0'; i++) {
        if (isalpha(code[i])) {
            letters++;
        } else if (isdigit(code[i])) {
            digits++;
        } else {
            special++;
        }
    }
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}
