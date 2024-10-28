#include <iostream>

using namespace std;

int main() {
    // prompt for user input
    int number;
    cout << "Enter a number from 0 to 9: ";
    cin >> number;

    switch(number) {
        case 1:
            cout << "One\n";
            break;
        case 2:
            cout << "Two\n";
            break;
        case 3: 
            cout << "Three\n";
            break;
        case 4:
            cout << "Four\n";
            break;
        case 5:
            cout << "Five\n";
            break;
        case 6:
            cout << "Six\n";
            break;
        case 7:
            cout << "Seven\n";
            break;
        case 8:
            cout << "Eight\n";
            break;
        case 9:
            cout << "Nine\n";
            break;
        default:
            cout << number << " is not a number from 0 to 9!\n";
    }

    return 0;
}