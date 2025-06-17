#include <stdio.h>

int main() {
    char lines[5][256];
    int i=0, j, c;
    int line_count = 0;
  while (1) {
        printf("Line %d: ", i + 1);
        j = 0;
        c = getchar();
        if (c == '\n' || c == EOF) {
            break;
        }
        lines[i][j++] = (char)c;
        while (1) {
            c = getchar();
            if (c == '\n' || c == EOF || j == 255) {
                lines[i][j] = '\0';
                break;
            }
            lines[i][j++] = (char)c;
        }
        line_count++;
        i++;
    }
    printf("\nYou entered:\n");
    for (i = 0; i < line_count; i++) {
        printf("%s\n", lines[i]);
    }
    return 0;
}
