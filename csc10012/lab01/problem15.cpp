#include <iostream>

using namespace std;

int main() {
    // vending machine
    long long bottle_amount, unit_price, user_paid, change_amount;
    
    // prompt for user input
    cout << "Enter a number of bottles: ";
    cin >> bottle_amount;

    cout << "Enter the unit price: ";
    cin >> unit_price;

    cout << "Enter the amount you paid: ";
    cin >> user_paid; 

    // calculate the change amount
    long long total_amount = user_paid - (bottle_amount * unit_price);

    // for 10-dollar bills
    change_amount = total_amount / 10;
    cout << change_amount << " of 10-dollar bills\n";
    total_amount %= 10;

    // for 5-dollar bills
    change_amount = total_amount / 5;
    cout << change_amount << " of 5-dollar bills\n";
    total_amount %= 5;

     // for 2-dollar bills
    change_amount = total_amount / 2;
    cout << change_amount << " of 2-dollar bills\n";
    total_amount %= 2;

     // for 1-dollar bills
    cout << total_amount << " of 1-dollar bills\n";

    return 0;
}