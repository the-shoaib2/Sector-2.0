//the.shoaib2
#include <stdio.h>
int main()

{
//intput 3 1 20  
//3=3
//3+1=4
//4+3=7
//5+7=12
//6+12=18
// five times sum
  
    int x, y,a = 1,c = 0, i;
    scanf("%d %d", &x, &y);
    while(x >= y){
        scanf("%d", &y);
    }
    for(i = x;i < y;i++){
        c += i;
        if(c > y)
        break;
        a++;
    }
    printf("%d\n", a);
    return 0;

}