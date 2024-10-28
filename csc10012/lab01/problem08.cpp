#include <iostream>

using namespace std;

int main() {
    double speed, distance;

    cout << "Speed (km/h): ";
    cin >> speed;

    cout << "Distance (km): ";
    cin >> distance;

    double time = distance / speed;
    printf("Time it takes Tuan to go from home to school is %.3f (h)\n", time);

    return 0;
}