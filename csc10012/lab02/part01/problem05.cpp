#include <iostream>

using namespace std;

int main() {
    // prompt for user input
    unsigned int month, year;
    bool is_leap = false;
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    // calculate if it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        is_leap = true;
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }

    // calculate the amount of days in month
    switch (month) {
    case 2:
        if (is_leap) {
            cout << month << " has " << 29 << " days.\n";
        } else {
            cout << month << " has " << 28 << " days.\n";
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10: 
    case 12:
        cout << month << " has " << 31 << " days.\n";
        break;
    default:
        cout << month << " has " << 30 << " days.\n";
    }

    return 0;
}