# Lab Task Report

## Question 1: Book Tag Generator
Your college library is developing a new self-check-in system. When a student enters the title of a book, the system generates a short tag using the first and last letters of the title. This tag helps librarians place books quickly on shelves.

**Task:** Write a C program that:
- Takes a single-word book title as input
- Prints the first character and the last character of the title

### Answer
```c
#include <stdio.h>
#include <string.h>

int main() {
    char title[100];
    scanf("%s", title);
    int len = strlen(title);
    if (len > 0) {
        printf("%c%c\n", title[0], title[len - 1]);
    }
    return 0;
}
```

---

## Question 2: Door Lock Code Checker
Your school uses a digital door lock for classrooms. Students have to type an entry code to open the door. The school wants a small program that can check what kinds of characters are inside the entry code.

**Task:** The program must count:
1. Letters (A–Z or a–z)
2. Digits (0–9)
3. Special characters (anything that is not a letter or digit)

### Answer
```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char code[100];
    int letters = 0, digits = 0, special = 0;
    scanf("%s", code);
    for (int i = 0; code[i] != '\0'; i++) {
        if (isalpha(code[i])) {
            letters++;
        } else if (isdigit(code[i])) {
            digits++;
        } else {
            special++;
        }
    }
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}
```

---

## Question 3: Password Validator
Before the online final exams begin, the university requires all students to create a secure login password. The system checks the password step-by-step (regression style) and tells the student whether the password is strong enough.

**Password Rules:**
1. Must be at least 6 characters long
2. Must contain at least one uppercase letter
3. Must contain at least one digit
4. Must include at least one special character from: @ # $ % & *

### Answer
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    scanf("%s", password);
    int len = strlen(password);
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    
    if (len >= 6) {
        for (int i = 0; i < len; i++) {
            if (isupper(password[i])) hasUpper = 1;
            else if (isdigit(password[i])) hasDigit = 1;
            else if (strchr("@#$%&*", password[i])) hasSpecial = 1;
        }
    }

    if (len >= 6 && hasUpper && hasDigit && hasSpecial) {
        printf("Valid password\n");
    } else {
        printf("Invalid password\n");
    }
    return 0;
}
```

---

## Question 4: Suspicious Packet Detector
A network security system monitors incoming binary packets. Some packets may contain a suspicious attack pattern.

**Pattern to detect:** `(0|1)*1(0|1)01001*`

**Task:** Write a C program that:
- Takes a binary string as input (only 0 and 1)
- Checks whether the string contains the suspicious pattern
- Prints "Suspicious packet" if the pattern exists
- Prints "Normal packet" if the pattern does not exist

### Answer
```c
#include <stdio.h>
#include <string.h>

int main() {
    char packet[200];
    scanf("%s", packet);
    int len = strlen(packet);
    int suspicious = 0;
    
    for (int i = 0; i <= len - 6; i++) {
        if (packet[i] == '1' && (packet[i+1] == '0' || packet[i+1] == '1') && 
            packet[i+2] == '0' && packet[i+3] == '1' && 
            packet[i+4] == '0' && packet[i+5] == '0') {
            
            int allOnes = 1;
            for (int j = i + 6; j < len; j++) {
                if (packet[j] != '1') {
                    allOnes = 0;
                    break;
                }
            }
            if (allOnes) {
                suspicious = 1;
                break;
            }
        }
    }

    if (suspicious) {
        printf("Suspicious packet\n");
    } else {
        printf("Normal packet\n");
    }
    return 0;
}
```
