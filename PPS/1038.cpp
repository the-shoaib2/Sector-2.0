//the.shoaib2
#include <stdio.h>
int main() {
    float A, B, soma;
    scanf ("%f%f", &A, &B);
    if ((A == 1) && (B > 0)){
        soma = B * 4.00;
        printf("Total: R$ %.2f\n", soma);
        }
    else {
    if((A == 2) && (B > 0)){
         soma = B * 4.50;
         printf("Total: R$ %.2f\n", soma);
           }
        if ((A == 3) && (B > 0)){
        soma = B * 5.00;
        printf("Total: R$ %.2f\n", soma);
        }
    else {
    if((A == 4) && (B > 0)){
         soma = B * 2.00;
         printf("Total: R$ %.2f\n", soma);
           }
      else {
    if((A == 5) && (B > 0)){
         soma = B * 1.50;
         printf("Total: R$ %.2f\n", soma);
           }
    return 0;
            }
      }
}
}