#include <stdio.h>

int main() {
    char line[256];
    int space_count = 0, tab_count = 0, newline_count = 0, vtab_count = 0, ffeed_count = 0, cr_count = 0;
    int i = 0, c;
    printf("Enter a line of text:\n");
    while (i < 255) {
        c = getchar();
        if (c == EOF || c == '\n') {
            line[i] = '\0';
            if (c == '\n') newline_count++;
            break;
        }
        line[i] = (char)c;
        if (c == ' ') space_count++;
        else if (c == '\t') tab_count++;
        else if (c == '\v') vtab_count++;
        else if (c == '\f') ffeed_count++;
        else if (c == '\r') cr_count++;
        i++;
    }
    printf("Spaces: %d\n", space_count);
    printf("Tabs: %d\n", tab_count);
    printf("Newlines: %d\n", newline_count);
    printf("Vertical Tabs: %d\n", vtab_count);
    printf("Form Feeds: %d\n", ffeed_count);
    printf("Carriage Returns: %d\n", cr_count);
    return 0;
}
