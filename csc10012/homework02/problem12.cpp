#include <iostream>

using namespace std;

int main() {
    const unsigned int note20k = 20000;
    const unsigned int note10k = 10000;
    const unsigned int note5k = 5000;
    const unsigned int note1k = 1000;

    unsigned int exchange_amount;

    cout << "Please input the amount of money to exchange!\n";
    cout << "Exchange money = ";
    cin >> exchange_amount;

    cout << "Your money is exchanged to the following notes:\n";
    cout << "Note 20000: " << exchange_amount / note20k << "\n";
    exchange_amount %= note20k;
    cout << "Note 10000: " << exchange_amount / note10k << "\n";
    exchange_amount %= note10k;
    cout << "Note 5000: " << exchange_amount / note5k << "\n";
    exchange_amount %= note5k;
    cout << "Note 1000: " << exchange_amount / note1k << "\n";
    exchange_amount %= note1k;
    cout << "Remaining money = " << exchange_amount << "\n";

    return 0;
}