#include <iostream>

using namespace std;

int main() {
    short int x;
    cout << "Input an integer x from 0 to 35: ";
    cin >> x;

    if (x < 10) {
        cout << x;
    } else {
        cout << static_cast<char>('A' + (x - 10));
    }

    return 0;
}