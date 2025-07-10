#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    int i = 0;
    if ((s[0] == 'a' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a')) {
        i = 2;
        int found = 0;
        while (s[i] == 'a' && s[i+1] == 'b') {
            i += 2;
            found = 1;
        }
        if (found && s[i] == '\0') {
            printf("Accepted\n");
            return 0;
        }
    }
    printf("Not Accepted\n");
    return 0;
}
