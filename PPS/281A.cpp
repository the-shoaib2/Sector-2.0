//the.shoaib2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1001]; 
    scanf("%s", s);
    s[0] = toupper(s[0]);
    printf("%s\n", s);
    return 0;
}
