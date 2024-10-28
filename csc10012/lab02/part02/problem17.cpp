#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned int min, sec;

    cout << "Enter the number of minutes: ";
    cin >> min;
    cout << "Enter the number of seconds: ";
    cin >> sec;

    if (sec > 59) {
        cout << "Invalid input\n";
        return 1;
    }

    while (min != 0 || sec != 0) {
        cout << setw(2) << setfill('0') << min << ":" << setfill('0') << setw(2) << sec;
        if (sec == 0) {
            min--;
            sec = 60;
        }
        if (sec < 6 && min == 0) {
            cout << " Tick-tock";
        }
        sec--;
        cout << "\n";
    }

    cout << setw(2) << setfill('0') << min << ":" << setfill('0') << setw(2) << sec << " Ding-dong" << "\n";

    return 0;
}