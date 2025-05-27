#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_ID_LEN 20
#define MAX_SYMBOLS 100

// Token type enum
enum TokenType {
    KEYWORD,
    IDENTIFIER,
    NUMBER,
    OPERATOR,
    PUNCTUATION,
};

// Keyword list
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
    "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register",
    "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
    "union", "unsigned", "void", "volatile", "while"
};

int keyword_count = sizeof(keywords) / sizeof(keywords[0]);

// Symbol Table structure
struct Symbol {
    char name[MAX_ID_LEN];
    enum TokenType type;
} symbolTable[MAX_SYMBOLS];

int symbolCount = 0;

// Check if a token is a keyword
int isKeyword(const char *str) {
    for (int i = 0; i < keyword_count; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

// Lookup symbol in table
int lookupSymbol(const char *str) {
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, str) == 0) {
            return i;
        }
    }
    return -1;
}

// Insert symbol if not already present
int insertSymbol(const char *str, enum TokenType type) {
    if (symbolCount < MAX_SYMBOLS && lookupSymbol(str) == -1) {
        strncpy(symbolTable[symbolCount].name, str, MAX_ID_LEN);
        symbolTable[symbolCount].type = type;
        symbolCount++;
        return 1;
    }
    return 0;
}

// Print the symbol table
void printSymbolTable() {
    printf("\nSymbol Table:\n");
    printf("Name\t\tType\n");
    printf("----------------------\n");
    for (int i = 0; i < symbolCount; i++) {
        printf("%-10s\t%d\n", symbolTable[i].name, symbolTable[i].type);
    }
}

// Tokenize and analyze a line of code
void analyzeLine(const char *line) {
    char token[MAX_ID_LEN];
    int index = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (isspace(line[i])) {
            if (index > 0) {
                token[index] = '\0';
                if (isKeyword(token)) {
                    insertSymbol(token, KEYWORD);
                } else if (isdigit(token[0])) {
                    insertSymbol(token, NUMBER);
                } else {
                    insertSymbol(token, IDENTIFIER);
                }
                index = 0;
            }
        } else if (isalnum(line[i]) || line[i] == '_') {
            if (index < MAX_ID_LEN - 1)
                token[index++] = line[i];
        } else {
            if (index > 0) {
                token[index] = '\0';
                if (isKeyword(token)) {
                    insertSymbol(token, KEYWORD);
                } else if (isdigit(token[0])) {
                    insertSymbol(token, NUMBER);
                } else {
                    insertSymbol(token, IDENTIFIER);
                }
                index = 0;
            }

            // Handle single-character punctuation/operators
            char punct[2] = { line[i], '\0' };
            insertSymbol(punct, PUNCTUATION);
        }
    }

    // Final token at end of line
    if (index > 0) {
        token[index] = '\0';
        if (isKeyword(token)) {
            insertSymbol(token, KEYWORD);
        } else if (isdigit(token[0])) {
            insertSymbol(token, NUMBER);
        } else {
            insertSymbol(token, IDENTIFIER);
        }
    }
}

// Main function
int main() {
    char line[256];

    printf("Enter lines of code (type 'exit' to quit):\n");

    while (1) {
        printf("> ");
        fgets(line, sizeof(line), stdin);
        if (strncmp(line, "exit", 4) == 0) {
            break;
        }
        analyzeLine(line);
    }

    printSymbolTable();

    return 0;
}

/*

Example input:
int x = 5;
if (x > 0) return x;
exit
Example output:
Symbol Table:
Name            Type
----------------------
int             0
x               1
=               4
5               2
;               4
if              0
(               4
>               4
0               2
)               4
return          0

*/ 