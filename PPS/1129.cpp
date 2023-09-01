// //the.shoaib2
#include <stdio.h>

int main(){
    int n, a, b, c, d, e;
    while(scanf("%d", &n) && n != 0){
            for(int i = 0; i < n; i++){
               int teste =0,index = 0;
                    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

                    if(a <= 127)
                    { teste++; index = 0; } 
                    if(b <= 127){ teste++; index = 1; } 
                    if(c <= 127){ teste++; index = 2; } 
                    if(d <= 127){ teste++; index = 3; } 
                    if(e <= 127){ teste++; index = 4; }
                    
                    if(teste == 1){
                            printf("%c\n", 'A' + index);
                    }else{
                          printf("*\n");
                    }
            }
                      
    }
    return 0;
}
