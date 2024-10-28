#include <iostream>

using namespace std;

int main() {
    double amount;

    cout << "Enter the amount of rice (in tons): ";
    cin >> amount;

    // convert ton into kg
    amount *= 1000;

    long long bags = (long long) amount / 20;
    bool remain = amount - bags * 20;

    cout << "The total number of bags is: " << bags + remain << "\n";

    return 0;
}