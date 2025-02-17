// wap to swap two integers using pointers (without using third variable)
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    int *p1 = &a, *p2 = &b;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}