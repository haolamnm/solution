// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned short int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c || a == d || b == c || b == d) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}