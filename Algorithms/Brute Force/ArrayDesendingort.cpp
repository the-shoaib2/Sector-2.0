#include <bits/stdc++.h>

using namespace std;

//reverse arr
int main() {
    int arr[] = {5,4,3,2,1};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
// //men
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }  

// this is the array revare swap fun
    int i=0, j = 4;
      for (int i = 0; i < j; i++) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
// //Without library
//     // reverse(arr, arr + 5);
//     for (int i = 0; i < 5; i++) {
//         cout << "Without library:" << arr[i] <<endl;
//     }

    return 0;
}