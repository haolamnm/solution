#include <iostream>
#define PI 3.1415

using namespace std;

int main() {
    int radius;
    cout << "Enter circle radius: ";
    cin >> radius;

    double perimeter; perimeter = radius * 2 * PI;
    double area; area = radius * radius * PI;

    printf("Circle's perimeter %.3f\n", perimeter);
    printf("Circle's area %.3f\n", area);

    return 0;
}