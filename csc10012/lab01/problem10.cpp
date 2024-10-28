#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter 2-digit number: ";
    cin >> num;

    int res = num % 10 * 10 + num / 10;
    printf("%d => %d", num, res);
    return 0;
}