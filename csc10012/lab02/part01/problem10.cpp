#include <iostream>

using namespace std;

int main() {
    
    long long distance;
    double price;
    cout << "Enter the distance: ";
    cin >> distance;

    if (distance >= 6) {
        price = distance - 5 + 4 * 1.5 + 2;
    } else if (distance >= 2) {
        price = (distance - 1) * 1.5 + 2;
    } else {
        price = 2;
    }
    cout << "Total price: " << price << "\n";

    return 0;
}