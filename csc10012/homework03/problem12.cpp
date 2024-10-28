#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    long long sum = 0;

    cout << "Please enter two numbers (smaller one first): ";
    cin >> num1 >> num2;

    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }

    cout << "Sum of all integers from " << num1
         << " through " << num2 << " is: " << sum 
         << ".\n";

    return 0;
}