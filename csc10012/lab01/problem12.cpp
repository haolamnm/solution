#include <iostream>

using namespace std;

int main() {
    const double k = 6.67e-11;
    double mass1, mass2, distance;

    cout << "Enter input (mass1 mass2 distance): ";
    cin >> mass1 >> mass2 >> distance;

    double res = k * ((mass1 * mass2) / (distance * distance));
    cout << "Gravitational force F between two objects is: " << res << "\n";

    return 0;
}