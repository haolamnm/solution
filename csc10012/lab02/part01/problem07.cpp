#include <iostream>

using namespace std;

int main() {
    // prompt user for input
    int a, b, c;
    cout << "Enter three numbers (a b c): ";
    cin >> a >> b >> c;

    // find the max
    int max = a;
    if (b >= c) {
        if (b > max) {
            max = b;
        }
    } else {
        if (c > max) {
            max = c;
        }
    }

    // find min and mean
    int min = a;
    if (b <= c) {
        if (b < min) {
            min = b;
        }
    } else {
        if (c < min) {
            min = c;
        }
    }

    // find the mean
    // a b c 
    int mean = a + b + c - max - min;

    // print the result
    cout << "The largest value is " << max << "\n";
    cout << "The smallest value is " << min << "\n";
    cout << "Ascending order: " << min << " " << mean << " " << max << "\n";

    return 0;
}