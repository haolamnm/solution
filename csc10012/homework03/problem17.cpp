#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Please enter first integer: \n"
         << "a = ";
    cin >> a; 
    cout << "Please enter second integer: \n"
         << "b = ";
    cin >> b;

    while (b != 0) {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    cout << "The GCD of the two numbers is: " 
         << a << '\n';

    return 0;
}