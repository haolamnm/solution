#include <iostream>

using namespace std;

int main() {
    double a, b, c, E = 1e-6;

    cout << "Enter three sides of the triangle: \n";
    cout << "a = ";
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << "c = "; 
    cin >> c;

    if ((a*a - b*b - c*c < E) && (a*a - b*b - c*c >= 0) ||
        (b*b - a*a - c*c < E) && (b*b - a*a - c*c >= 0) ||
        (c*c - a*a - b*b < E) && (c*c - a*a - b*b >= 0)) {
            printf("Can be a right triangle.\n");
        }
    else {
        printf("Can not be a right triangle.\n");
    }

    return 0;
}