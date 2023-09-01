//the.shoaib2
#include<stdio.h>

int main(){
    double A,B,C;

    scanf("%lf %lf %lf", &A, &B, &C);
          //if A ≥ B + C, write the message: NAO FORMA TRIANGULO
    if(A >= (B + C) || B >= (A + C) || C >= (A + B))
         printf("NAO FORMA TRIANGULO\n");
         //if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    else if(A*A == (B*B + C*C) || B*B == (A*A + C*C) || C*C == (A*A + B*B))
           printf("TRIANGULO RETANGULO\n");
           //if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    else if(A*A > (B*B + C*C) || B*B > (A*A + C*C) || C*C > (A*A + B*B))
           printf("TRIANGULO OBTUSANGULO\n");
           //if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    else if(A*A < (B*B + C*C) || B*B < (A*A + C*C) || C*C < (A*A + B*B))
           printf("TRIANGULO ACUTANGULO\n");

//if the three sides are the same size, write the message: TRIANGULO EQUILATERO
    if(A == B && A == C)
            printf("TRIANGULO EQUILATERO\n");
            //if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
    if((A == B && A != C)  || (A == C && A != B) || (B == C && B != A))
            printf("TRIANGULO ISOSCELES\n");

 return 0;
    
}