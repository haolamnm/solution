#include <iostream>

using namespace std;

int main() {
    double price;
    cout << "Price excludes VAT: ";
    cin >> price;

    double price_after = price + price * 0.1;

    printf("Product cost after VAT is: %.3f", price_after);

    return 0;
}