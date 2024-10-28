#include <iostream>

using namespace std;

int main() {
    int n;
    bool first = 1;

    cout << "Enter an integer:\n"
         << "n = ";
    cin >> n;
    
    cout << "The prime factors are ";

    // Check for even number first
    while (!(n & 1)) {
        if (!first) {
            cout << " x ";
        }
        cout << 2;
        n = (n >> 1);
        first = 0;
    }

    // After that, n must be an odd number
    for (int i = 3; i*i <= n; i += 2) {
        while (n % i == 0) {
            if (!first) {
                cout << " x ";
            }
            cout << i;
            n /= i;
            first = 0;
        }
    }

    // If n still larger than 2, then n itself is a prime
    if (n > 2) {
        if (!first) {
            cout << " x ";
        }
        cout << n;
    }

    cout << '\n';

    return 0;
}