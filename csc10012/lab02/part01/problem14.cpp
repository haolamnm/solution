#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the constant for a.x^2 + b.x + c = 0\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b; 
    cout << "c = ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Inf solution.\n";
            } else {
                cout << "No solution.\n";
            }
        } else {
            cout << "1 Solution, x = " << -c / b;
        }
    } else {
        double delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            cout << "No solution.\n";
        } else if (delta == 0) {
            cout << "1 Solution, x = " << -b / (2 * a);
        } else {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "2 Solutions: \n";
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
        }
    }

    return 0;
}