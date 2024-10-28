#include <iostream>

using namespace std;

int main() {
    int n;
    double sum = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 1) {
        cout << "Invalid input.\n";
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        sum += (double) i / (i - 1);
    }
    cout << "Result of S is " << sum << "\n";

    return 0;
}