#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    if (s[0] == 'a') {
        int i = 1;
        while (s[i] == 'b') i++;
        if (s[i] == '\0') {
            printf("Accepted\n");
            return 0;
        }
    }
    printf("Not Accepted\n");
    return 0;
}
