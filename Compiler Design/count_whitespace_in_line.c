#include <stdio.h>

int main() {
    char line[256];
    int space_count = 0, tab_count = 0, newline_count = 0, vtab_count = 0, ffeed_count = 0, cr_count = 0;
    printf("Enter a line of text:\n");
    if (fgets(line, sizeof(line), stdin)) {
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ') space_count++;
            else if (line[i] == '\t') tab_count++;
            else if (line[i] == '\n') newline_count++;
            else if (line[i] == '\v') vtab_count++;
            else if (line[i] == '\f') ffeed_count++;
            else if (line[i] == '\r') cr_count++;
        }
        printf("Spaces: %d\n", space_count);
        printf("Tabs: %d\n", tab_count);
        printf("Newlines: %d\n", newline_count);
        printf("Vertical Tabs: %d\n", vtab_count);
        printf("Form Feeds: %d\n", ffeed_count);
        printf("Carriage Returns: %d\n", cr_count);
    } else {
        printf("Error reading input.\n");
    }
    return 0;
}
