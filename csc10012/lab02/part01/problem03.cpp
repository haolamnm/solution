#include <iostream>
#include <math.h> // sqrt

using namespace std;

int main() {
    // prompt for user input
    unsigned int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // calculate if n is a perfect square
    unsigned int sqrtn = sqrt(n);
    if (sqrtn * sqrtn == n) {
        cout << n << " is a perfect square.\n";
    } else {
        cout << n << " is not a perfect square.\n";
    }

    return 0;
}

// tmp = sqrt(n)
// if (tmp == (int) tmp)