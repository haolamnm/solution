// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned short int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < d && b >= c) {
        cout << "YES";
    } else if (c < b && d >= a) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}