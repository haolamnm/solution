#include <iostream>

using namespace std;

int main() {
    double mass, density;

    cout << "Object's mass (m) is: ";
    cin >> mass;
    cout << "Object's density (D) is: ";
    cin >> density;

    double volume = mass / density;
    printf("Object's volume (V) is: %.3f", volume);

    return 0;
}