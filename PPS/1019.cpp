//the.shoaib2
#include <stdio.h>
int main()
{
 int seconds;   
 scanf("%d", &seconds);
 int hours = seconds / 3600;
 seconds = seconds - (hours * 3600);  
 int minutes = seconds / 60;
 seconds = seconds - (minutes * 60);  
 printf("%d:%d:%d\n", hours, minutes, seconds);  
 return 0;
}