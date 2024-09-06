// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long int a;
    long double b;
    cin >> a;
    b = sqrt(a);
    if (round(b) * round(b) == a) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}