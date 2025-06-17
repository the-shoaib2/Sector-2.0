#include <stdio.h>


// This program checks if the input string matches the regex (ab)+
// It accepts strings that consist of one or more occurrences of "ab", "abab", "ababab" in sequence.  
// It rejects any string that does not match this pattern.

int main() {
    char str[256];

    while (1) {
        int i = 0, count = 0;

        printf("Enter : ");
        fgets(str, sizeof(str), stdin);

      
        while (str[i] == 'a' && str[i + 1] == 'b') {
            count++;
            i += 2;
        }

   
        if ((str[i] == '\n' || str[i] == '\0') && count >= 1) {
            printf("Accepted: matches (ab)+\n");
        } else {
            printf("Rejected: does not match (ab)+\n");
        }
    }

    return 0;
}
