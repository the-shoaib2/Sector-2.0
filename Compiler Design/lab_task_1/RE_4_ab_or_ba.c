#include <stdio.h>

int main() {
    char s[10];
    scanf("%s", s);
    if ((s[0] == 'a' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a')) {
        if (s[2] == '\0') {
            printf("Accepted\n");
            return 0;
        }
    }
    printf("Not Accepted\n");
    return 0;
}
