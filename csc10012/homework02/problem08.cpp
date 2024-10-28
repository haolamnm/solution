#include <iostream>

using namespace std;

int main() {
    const unsigned int current_year = 2024;
    unsigned int birth_year;

    cout << "Please enter your birth year: ";
    cin >> birth_year;

    unsigned int month = (current_year - birth_year) * 12;
    cout << "You are " << month << " months old.\n";

    return 0;
}