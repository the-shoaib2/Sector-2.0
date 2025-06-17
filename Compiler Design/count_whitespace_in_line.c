#include <stdio.h>

int main() {
    char line[256];
    int count = 0;
    printf("Enter a line of text:\n");
    if (fgets(line, sizeof(line), stdin)) {
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n' || line[i] == '\v' || line[i] == '\f' || line[i] == '\r') {
                count++;
            }
        }
        printf("Number of whitespace characters: %d\n", count);
    } else {
        printf("Error reading input.\n");
    }
    return 0;
}
