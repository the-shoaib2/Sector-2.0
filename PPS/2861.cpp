//the.shoaib2
#include <stdio.h>

int main() {
    int c;

    scanf("%d\n", &c); // remove the newline character from the input

    for(int i = 0; i < c; i++) {
        char question[101];
        fgets(question, 101, stdin); // read the question from the input
        printf("gzuz\n"); // print the answer
    }

    return 0;
}
