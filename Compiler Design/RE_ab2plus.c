#include <stdio.h>

int main() {
    char str[256];
    int i = 0, count = 0;
    while(1){

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
