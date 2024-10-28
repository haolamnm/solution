#include <iostream>

using namespace std;

int main() {
    long long Alex_balance = 100;
    double Cleo_balance = 100;
    unsigned year = 0;
    while (Alex_balance >= Cleo_balance) {
        Alex_balance += 10;
        Cleo_balance += 0.05 * Cleo_balance;
        year++;
    }

    cout << year << '\n';
    cout << "Alex balance: $" << Alex_balance << '\n';
    cout << "Cleo balance: $" << Cleo_balance << '\n';

}