#include <iostream>

using namespace std;

int main() {
    unsigned int x, k = 0;

    cout << "Enter an integer x: ";
    cin >> x;

    cout << "The sequence: ";

    while (x != 1) {
        cout << x << ", ";
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        k++;
    }
    cout << x;
    cout << "\nk = " << k << "\n";

    return 0;
}