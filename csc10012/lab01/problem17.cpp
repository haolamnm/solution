#include <iostream>
#include <iomanip> // setprecision

using namespace std;

int main() {
    // prompt for user input
    double weight, height;
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    // calculate BMI
    double BMI = weight / (height * height);
    cout << "Your BMI (kg/m^2) is: " << fixed << setprecision(3) << BMI << "\n";

    return 0;
}