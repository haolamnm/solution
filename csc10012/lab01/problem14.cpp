#include <iostream>

using namespace std;

int main() {
    long long total_amount = 0;
    long long change_amount = 0; 
    cout << "The amount of money (in dollar): ";
    cin >> total_amount;
    
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