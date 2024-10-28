#include <iostream>

using namespace std;

int main() {
    // car's speed over 60km/h
    double x;
    cout << "Inputs the car speed (km/h) over the 60 km/h: ";
    cin >> x;

    if (x <= 5) {
        cout << "Ok.\n";
    } else if (x <= 10) {
        cout << "$28.45\n";
    } else if (x <= 20) {
        cout << "$101.62\n";
    } else if (x <= 35) {
        cout << "$223.53\n";
    } else {
        cout << "$304.82\n";
    }

    return 0;
}