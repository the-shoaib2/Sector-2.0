#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to check if a number is a super prime
bool is_super_prime(int n)
{
    // Check if n is prime
    if (!is_prime(n))
    {
        return false;
    }
    // Check if all digits of n are prime
    while (n > 0)
    {
        int digit = n % 10;
        if (!is_prime(digit))
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    // Read integers until end of input
    while (scanf("%d", &n) != EOF)
    {
        // Check if n is a super prime
        if (is_super_prime(n))
        {
            printf("Super\n");
        }
        // Check if n is prime but not a super prime
        else if (is_prime(n))
        {
            printf("Primo\n");
        }
        // n has divisors beyond 1 and itself
        else
        {
            printf("Nada\n");
        }
    }
    return 0;
}
