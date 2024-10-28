#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Please enter the 1st number: \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // swap using subtraction
    a = a + b; // a = 15
    b = a - b; // b = 15 - 5 = 10
    a = a - b; // a = 15 - 10 = 5

    // swap using bitwise XOR
    // a = a ^ b; // 5 ^ 10 = 15
    // b = a ^ b; // 15 ^ 10 = 5
    // a = a ^ b; // 15 ^ 5 = 10

    cout << "\nAfter the swap:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}