// the.shoaib2
#include <stdio.h>
int main()
{
  char ch;
  ch = getchar();
  int i, k;
  for (i = 0, k = 65; i < 26; i++, k++)
  {
    if (ch == k)
      break;
  }
  printf("%d\n", ++i);
  return 0;
}