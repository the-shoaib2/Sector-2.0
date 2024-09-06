#include <iostream>

using namespace std;

//swap with variable
// void SwapWithVariable(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void SwapWithoutVariable(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// void SwapWithoutVariable(int &a, int &b)
// {
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
// }
void SwapuseSTL(int &a, int &b)
{
    swap(a,b);
}


int main()
{
    int x ;
    int y ;
    cin >> x;
    cin >> y;
    int array[]={1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);


    cout << "Size: x = " << n << endl;
    cout << "Before: x = " << x << ", y = " << y << endl;
    SwapuseSTL(x,y);
    cout << "After: x = " << x << ", y = " << y << endl;

    return 0;
}
