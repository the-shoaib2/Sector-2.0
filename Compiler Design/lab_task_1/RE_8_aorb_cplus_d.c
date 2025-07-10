#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    if (s[0] != 'a' && s[0] != 'b') {
        printf("Not Accepted\n");
        return 0;
    }
    int i = 1;
    if (s[i] != 'c') {
        printf("Not Accepted\n");
        return 0;
    }
    while (s[i] == 'c') i++;
    if (s[i] == 'd' && s[i+1] == '\0') printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}
