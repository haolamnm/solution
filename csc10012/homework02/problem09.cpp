#include <iostream>

using namespace std;

int main() {
    double inch;

    cout << "Please enter the number of inches: ";
    cin >> inch;

    double mm = inch * 25.4;

    cout << inch << " in converts to " << mm << " mm.\n";

    return 0;
}