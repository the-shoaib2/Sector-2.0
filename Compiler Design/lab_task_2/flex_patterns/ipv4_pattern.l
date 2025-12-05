%{
#include <stdio.h>
#include <stdlib.h>
%}

/* FLEX pattern to match valid IPv4 addresses */
/* Each octet: 0-255 */
/* Format: A.B.C.D */

%%
[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3} {
    /* Check if each octet is valid (0-255) */
    char *copy = strdup(yytext);
    char *token = strtok(copy, ".");
    int valid = 1;
    
    while (token != NULL && valid) {
        int octet = atoi(token);
        if (octet < 0 || octet > 255) {
            valid = 0;
        }
        token = strtok(NULL, ".");
    }
    
    free(copy);
    
    if (valid) {
        printf("VALID IPv4: %s\n", yytext);
    } else {
        printf("INVALID IPv4: %s\n", yytext);
    }
}

.|\n { /* Ignore other characters */ }
%%

int main(int argc, char *argv[]) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (file) {
            yyin = file;
        }
    }
    
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
