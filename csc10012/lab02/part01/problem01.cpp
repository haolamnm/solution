#include <iostream>

using namespace std;

int main() {

    int hours, minutes, seconds;

    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes; 
    cout << "Seconds: ";
    cin >> seconds;

    if (hours >= 0 && hours <= 24
        && minutes >= 0 && minutes <= 30 
        && seconds >= 0 && seconds <= 60) {
        cout << "Valid\n";
    } else {
        cout << "Invalid\n";
    }

    return 0;
}