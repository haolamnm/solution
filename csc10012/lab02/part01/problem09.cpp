#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    const double E = 1e-6;
    cout << "Enter three sides of the triangle: \n";
    cout << "a = ";
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << "c = "; 
    cin >> c;

    // check if can be triangle.
    if (a + b - c <= E ||
        a + c - b <= E ||
        b + c - a <= E) {
        cout << "Can not be a triangle.\n";
    }
    // check types of the triangle. 
    else {
        if (a == b && b == c && a == c) {
            cout << "An equilateral triangle.\n";
        } 
        else if ((a*a - b*b - c*c < E) && (a*a - b*b - c*c >= 0) ||
                 (b*b - a*a - c*c < E) && (b*b - a*a - c*c >= 0) ||
                 (c*c - a*a - b*b < E) && (c*c - a*a - b*b >= 0)) {
            cout << "A right triangle.\n";
        } else if (a == b || b == c || a == c) {
            cout << "A isosceles triangle.\n";
        } else {
            cout << "A scalene triangle.\n";
        }
    }

    return 0;
}