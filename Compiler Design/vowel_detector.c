#include <stdio.h>


int main() {
    char ch;
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
    int t = 0, total_chars = 0;
    while (1) {
        ch = getchar();
        if (ch == '\n' || ch == EOF) {
            break;
        }
        total_chars++;
        if (ch == 'a' || ch == 'A') {
            printf("'%c' is a vowel.\n", ch);
            a_count++;
            t++;
        } else if (ch == 'e' || ch == 'E') {
            printf("'%c' is a vowel.\n", ch);
            e_count++;
            t++;
        } else if (ch == 'i' || ch == 'I') {
            printf("'%c' is a vowel.\n", ch);
            i_count++;
            t++;
        } else if (ch == 'o' || ch == 'O') {
            printf("'%c' is a vowel.\n", ch);
            o_count++;
            t++;
        } else if (ch == 'u' || ch == 'U') {
            printf("'%c' is a vowel.\n", ch);
            u_count++;
            t++;
        } else {
            printf("'%c' is not a vowel.\n", ch);
        }
    }
    printf("a: %d\n", a_count);
    printf("e: %d\n", e_count);
    printf("i: %d\n", i_count);
    printf("o: %d\n", o_count);
    printf("u: %d\n", u_count);
    printf("total vowels: %d\n", t);
    printf("total chars: %d\n", total_chars);
    return 0;
}
