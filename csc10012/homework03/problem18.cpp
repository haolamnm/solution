#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Please enter an integer: ";
    cin >> num;

    cout << "Its binary representation is: ";
    for (int i = 31 - __builtin_clz(num); i >= 0; --i) {
        cout << ((num >> i) & 1);
    }

    cout << '\n';

    return 0;
}