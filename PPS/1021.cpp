// the.shoaib2
#include <stdio.h>

int main() {
    double n;
    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.0, 0.5, 0.25, 0.10, 0.05, 0.01};

    scanf("%lf", &n);

    printf("NOTAS:\n");

    for (int i = 0; i < 6; i++) {
        int count = n / notes[i];
        n -= count * notes[i];
        printf("%d nota(s) de R$ %d.00\n", count, notes[i]);
    }

    printf("MOEDAS:\n");

    for (int i = 0; i < 6; i++) {
        int count = n / coins[i];
        n -= count * coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i]);
    }

    return 0;
}



// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double valor;

//     unsigned int inteira, fracao;

//     scanf("%lf", &valor);

//     inteira = (int)valor;
//     valor -= inteira;

//     fracao = round((valor * 100));

//     printf("NOTAS:\n");
//     printf("%d nota(s) de R$ 100.00\n", inteira / 100);

//     inteira -= (inteira / 100) * 100;

//     if (inteira > 50)
//     {
//         printf("1 nota(s) de R$ 50.00\n");
//         inteira -= 50;
//     }
//     else
//     {
//         printf("0 nota(s) de R$ 50.00\n");
//     }

//     printf("%d nota(s) de R$ 20.00\n", inteira / 20);

//     inteira -= (inteira / 20) * 20;
//     printf("%d nota(s) de R$ 10.00\n", inteira / 10);

//     inteira -= (inteira / 10) * 10;
//     printf("%d nota(s) de R$ 5.00\n", inteira / 5);

//     inteira -= (inteira / 5) * 5;
//     printf("%d nota(s) de R$ 2.00\n", inteira / 2);

//     printf("MOEDAS:\n");
//     inteira -= (inteira / 2) * 2;
//     printf("%d moeda(s) de R$ 1.00\n", inteira);

//     if (fracao > 50)
//     {
//         printf("1 moeda(s) de R$ 0.50\n");
//         fracao -= 50;
//     }
//     else
//     {
//         printf("0 moeda(s) de R$ 0.50\n");
//     }

//     printf("%d moeda(s) de R$ 0.25\n", fracao / 25);

//     fracao -= (fracao / 25) * 25;
//     printf("%d moeda(s) de R$ 0.10\n", fracao / 10);

//     fracao -= (fracao / 10) * 10;
//     printf("%d moeda(s) de R$ 0.05\n", fracao / 5);

//     fracao -= (fracao / 5) * 5;
//     printf("%d moeda(s) de R$ 0.01\n", fracao);

//     return 0;
// }