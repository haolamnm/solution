#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Please enter an integer: ";
    cin >> n;

    for (int i = 2; i*i <= n; ++i) {
        if (i*i == n) {
            cout << n << " is a perfect square\n";
            return 0;
        }
    }

    cout << n << " is not a perfect square\n";

    return 0;
}

// O(sqrt(n))