#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Integer (num): ";
    cin >> num;

    int res = num * num * num - 5 * num * num + 6;
    cout << "The value of the expression is " << res << "\n";
    
    return 0;
}