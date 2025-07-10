#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = 0;
    while (s[len] == 'a' || s[len] == 'b') len++;
    if (s[len] == '\0' && len >= 3 && s[len-3] == 'a' && s[len-2] == 'b' && s[len-1] == 'b') {
        printf("Accepted\n");
    } else {
        printf("Not Accepted\n");
    }
    return 0;
}
