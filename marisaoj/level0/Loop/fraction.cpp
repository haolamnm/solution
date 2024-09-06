// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned int a, b, temp;
    cin >> a >> b;
    temp = gcd(a, b);
    a /= temp;
    b /= temp;
    cout << a << " " << b;
 
    return 0;
}