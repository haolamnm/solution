#include <iostream>
#include <iomanip> // setw

using namespace std;

int main() {
    // prompt user for input
    short unsigned int x, y;
    cout << "Enter two integer x, y (99 < x, y < 1000): ";
    cin >> x >> y;

    // print the multiplication
    cout << setw(7) << x << "\n";
    cout << "x" << setw(6) << y << "\n";
    cout << "-------\n";
    cout << setw(7) << y % 10 * x << "\n";
    cout << setw(6) << (y % 100 - y % 10) / 10 * x << "\n";
    cout << setw(5) << (y - y % 100) / 100 * x << "\n";
    cout << "-------\n";
    cout << setw(7) << y * x << "\n";

    return 0;
}