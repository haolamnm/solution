// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    char op;
    double a, b;
    cin >> a >> op >> b;
    if (op == '+') {
        cout << fixed << setprecision(3) << a + b;
    } else if (op == '-') {
        cout << fixed << setprecision(3) << a - b;
    } else if (op == '*') {
        cout << fixed << setprecision(3) << a * b;
    } else if (op == '/') {
        if (b == 0) {
            cout << "ze";
        } else {
            cout << fixed << setprecision(3) << a / b;
        }
    } else {
        cout << "ze";
    }
 
    return 0;
}