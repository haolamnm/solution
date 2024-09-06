// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    short int a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "INFINITE SOLUTIONS";
        } else {
            cout << "NO SOLUTION";
        }
    } else {
        if (b % a == 0) {
            cout << (-b) / a;
        } else {
            cout << "NO SOLUTION";
        }
    }
    
    return 0;
}