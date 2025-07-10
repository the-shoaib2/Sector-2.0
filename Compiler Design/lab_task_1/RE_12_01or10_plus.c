#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    int i = 0, found = 0;
    while ((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')) {
        i += 2;
        found = 1;
    }
    if (found && s[i] == '\0') printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}
