#include <iostream>

using namespace std;

int main () {
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0 && i % 5 != 0) {
            sum += i;
        }
    }

    cout << "The sum is " << sum << "\n";

    return 0;
}