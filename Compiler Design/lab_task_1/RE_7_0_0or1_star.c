#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    if (s[0] != '0') {
        printf("Not Accepted\n");
        return 0;
    }
    int i = 1;
    while (s[i] == '0' || s[i] == '1') i++;
    if (s[i] == '\0') printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}
