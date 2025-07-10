#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    int i = 0;
    while (s[i] == 'a' && s[i+1] == 'b') i += 2;
    if (i > 0 && s[i] == '\0') printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}
