#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Write a c program to count and show the max frequency of a word in a string.


#define MAX_WORDS 100
#define MAX_WORD_LEN 50
#define MAX_STR_LEN 1000

// Convert string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

// Check if two strings are equal
int isEqual(char *a, char *b) {
    return strcmp(a, b) == 0;
}

// Check if a character is a delimiter
int isDelimiter(char ch) {
    return ch == ' '  ch == '\t'  ch == '\n'  ch == '.'  ch == ',' || 
           ch == ';'  ch == ':'  ch == '!' || ch == '?';
}

int main() {
    char str[MAX_STR_LEN];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int freq[MAX_WORDS] = {0};
    int wordCount = 0;

    printf("Enter a string:\n");
    fgets(str, MAX_STR_LEN, stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline if any

    toLowerCase(str); // Make lowercase for uniform matching

    int i = 0;
    while (str[i] != '\0') {
        char word[MAX_WORD_LEN];
        int j = 0;

        // Skip delimiters
        while (str[i] != '\0' && isDelimiter(str[i])) i++;

        // Extract word
        while (str[i] != '\0' && !isDelimiter(str[i]) && j < MAX_WORD_LEN - 1) {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if (j == 0) continue; // Empty word, skip

        // Check if word already exists
        int found = 0;
        for (int k = 0; k < wordCount; k++) {
            if (isEqual(words[k], word)) {
                freq[k]++;
                found = 1;
                break;
            }
        }

        // If not found, add new word
        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount], word);
            freq[wordCount] = 1;
            wordCount++;
        }
    }

    // Find word with max frequency
    int maxIdx = 0;
    for (int i = 1; i < wordCount; i++) {
        if (freq[i] > freq[maxIdx]) {
            maxIdx = i;
        }
    }

    // Show result
    if (wordCount > 0) {
        printf("\nMost frequent word: '%s'\n", words[maxIdx]);
        printf("Frequency: %d\n", freq[maxIdx]);
    } else {
        printf("\nNo valid words found.\n");
    }

    return 0;
}