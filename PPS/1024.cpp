// the.shaoib2
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, l;
    char ch[1002];

    scanf("%d", &n);
    getchar(); // consume the newline character after reading integer

    for (i = 0; i < n; i++) {
        fgets(ch, 1002, stdin); // read a line of input

        l = strlen(ch);
        if (ch[l - 1] == '\n') {
            ch[--l] = '\0'; // remove newline character at the end of the line
        }
        // step 1: shift each letter 3 positions to the right
        for (j = 0; j < l; j++) {
            if ((ch[j] >= 'a' && ch[j] <= 'z') || (ch[j] >= 'A' && ch[j] <= 'Z')) {
                ch[j] += 3;
            }
        }
        // step 2: reverse the line
        for (j = 0, k = l - 1; j < k; j++, k--) {
            char temp = ch[j];
            ch[j] = ch[k];
            ch[k] = temp;
        }

        // step 3: move each letter from the half on (truncated) one position to the left
        for (j = l / 2; j < l; j++) {
            ch[j] -= 1;
        }

        printf("%s\n", ch);
    }

    return 0;
}








// this code source in online
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k = 3, l, n, o, p;
    char ch[1002], ch1[1002];
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        gets(ch);
        l = strlen(ch);
        for (j = 0; j < l; j++)
        {
            if ((ch[j] >= 'A' && ch[j] <= 'Z') || (ch[j] >= 'a' && ch[j] <= 'z'))
                ch[j] += 3;
        }
        p = l - 1;
        for (j = 0; j < l; j++)
        {
            ch1[j] = ch[p];
            p--;
        }
        ch1[j] = '\0';
        for (j = l / 2; j < l; j++)
            ch1[j] -= 1;
        printf("%s\n", ch1);
    }
    return 0;
}