//the.shoaib2
#include <stdio.h>

int main() {
    char name[10][31];
    int i, idx[3] = {2, 6, 8};

    for(i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }

    for(i = 0; i < 3; i++) {
        printf("%s\n", name[idx[i]]);
    }

    return 0;
}








// #include<stdio.h>
// int main()
// {
//     long long char a,b,c,d,e,f,g,h,i,j;
//     scanf("%lc\n",&a);
//     scanf("%lc\n",&b);
//     scanf("%lc\n",&c);
//     scanf("%lc\n",&d);
//     scanf("%lc\n",&e);
//     scanf("%lc\n",&f);
//     scanf("%lc\n",&g);
//     scanf("%lc\n",&h);
//     scanf("%lc\n",&i);
//     scanf("%lc",&j);
//     printf("%lc\n",c);
//     printf("%lc\n",g);
//     printf("%lc\n",i);


//     return 0;
// }


