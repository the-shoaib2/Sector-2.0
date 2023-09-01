// the.shoaib2
#include <stdio.h>

int main() {
    int fuel, alcohol = 0, gasoline = 0, diesel = 0;

    while (1) {
        scanf("%d", &fuel);

        if (fuel == 1) {
            alcohol++;
        } else if (fuel == 2) {
            gasoline++;
        } else if (fuel == 3) {
            diesel++;
        } else if (fuel == 4) {
            break;
        } else {
            continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}
