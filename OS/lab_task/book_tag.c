#include <stdio.h>
#include <string.h>

int main() {
    char title[100];
    scanf("%s", title);
    int len = strlen(title);
    if (len > 0) {
        printf("%c%c\n", title[0], title[len - 1]);
    }
    return 0;
}
