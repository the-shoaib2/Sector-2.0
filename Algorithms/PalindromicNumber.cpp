#include <bits/stdc++.h>

using namespace std;

// use STL reverse libirary fungtion
bool isPalindrome(int number) {
    string Orginal = to_string(number);
    string reversed = Orginal;
    reverse(reversed.begin(), reversed.end());
    return Orginal == reversed;
}

/*
bool isPalindrome(int n) {
    int originaln = n;
    int reversedn = 0;
    while (n > 0) {
        int digit = n % 10;
        reversedn = reversedn * 10 + digit;
        n /= 10;
    }
    return originaln == reversedn;
}
*/

int main() {
    int num;
    cout << "Enter a n: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}
