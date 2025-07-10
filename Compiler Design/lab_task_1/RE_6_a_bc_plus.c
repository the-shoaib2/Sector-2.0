#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    if (s[0] != 'a') {
        printf("Not Accepted\n");
        return 0;
    }
    int i = 1;
    int found = 0;
    while (s[i] == 'b' && s[i+1] == 'c') {
        i += 2;
        found = 1;
    }
    if (found && s[i] == '\0') printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}
