#include <bits/stdc++.h>

using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using GCD
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{

    while (1)
    {
        cout << "\t\t\t\t\t\t------GCD & LCM------"<<endl<<endl<<endl<<endl;
 
        int num1, num2;
        int choice;

        // Get user input
        cout << "\t\t\t\t\t\tEnter first number: ";
        cin >> num1;
        cout << "\t\t\t\t\t\tEnter second number: ";
        cin >> num2;

        // Get user choice for GCD or LCM
        cout << "\t\t\t\t\t\t[1]-----GCD " <<endl;
        cout << "\t\t\t\t\t\t[2]-----LCM" <<endl;
        cout << "\t\t\t\t\t\tEnter your choice: ";
        cin >> choice;
        cout <<endl;
        cout <<endl;
        cout <<endl;
        // Perform calculation based on user choice
        switch (choice)
        {
        case 1:
            cout << "\t\t\t\t\t\tGCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) <<endl;
            break;
        case 2:
            cout << "\t\t\t\t\t\tLCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) <<endl;
            break;
        default:
            cout << "\t\t\t\t\t\tInvalid choice. Please choose 1 for GCD or 2 for LCM." <<endl;
            break;
        }

        // Wait for user input before clearing the screen
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();

        // Clear the console screen
        system("cls");
    }

    return 0;
}
