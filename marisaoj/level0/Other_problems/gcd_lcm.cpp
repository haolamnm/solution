// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << ' ' << lcm(a, b);    

    return 0;
}