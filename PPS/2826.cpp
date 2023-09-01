#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];

    while (scanf("%s%s", str1, str2) == 2) {
        if (strcmp(str1, str2) <= 0) {
            printf("%s\n%s\n", str1, str2);
        } else {
            printf("%s\n%s\n", str2, str1);
        }
    }

    return 0;
}
