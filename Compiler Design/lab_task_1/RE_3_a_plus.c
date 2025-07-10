#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    int i = 0;
    if (s[0] != 'a') {
        printf("Not Accepted\n");
        return 0;
    }
    while (s[i] == 'a') i++;
    if (s[i] == '\0') printf("Accepted\n");
    else printf("Not Accepted\n");
    return 0;
}
