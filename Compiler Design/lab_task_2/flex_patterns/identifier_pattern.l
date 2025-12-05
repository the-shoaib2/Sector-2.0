%{
#include <stdio.h>
#include <string.h>
%}

/* Keywords to exclude */
%{
int is_keyword(const char *str) {
    return strcmp(str, "if") == 0 ||
           strcmp(str, "else") == 0 ||
           strcmp(str, "while") == 0 ||
           strcmp(str, "for") == 0 ||
           strcmp(str, "return") == 0;
}
%}

%%
/* Pattern for identifiers: letter/underscore followed by letters/digits/underscore */
[a-zA-Z_][a-zA-Z0-9_]* {
    if (!is_keyword(yytext)) {
        printf("VALID IDENTIFIER: %s\n", yytext);
    } else {
        printf("KEYWORD (excluded): %s\n", yytext);
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
