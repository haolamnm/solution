#include <iostream>

using namespace std;

int main() {
    // prompt for user input
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // calculate if n is an even number or not
    // ((n ^ 1) == (n + 1))
    // (!(n & 1)) ==> fastest maybe
    // ((n | 1) > n)
    // (n == (n >> 1) << 1)
    if ((n ^ 1) == (n + 1)) {
        cout << n << " is an even number.\n";
    } else {
        cout << n << " is an odd number.\n";
    }

    return 0;
}