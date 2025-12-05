#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    scanf("%s", password);
    int len = strlen(password);
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    
    if (len >= 6) {
        for (int i = 0; i < len; i++) {
            if (isupper(password[i])) hasUpper = 1;
            else if (isdigit(password[i])) hasDigit = 1;
            else if (strchr("@#$%&*", password[i])) hasSpecial = 1;
        }
    }

    if (len >= 6 && hasUpper && hasDigit && hasSpecial) {
        printf("Valid password\n");
    } else {
        printf("Invalid password\n");
    }
    return 0;
}
