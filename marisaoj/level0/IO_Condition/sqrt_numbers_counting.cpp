// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long int a;
    long double n;
    cin >> a;
    n = sqrt(a);
    cout << fixed << setprecision(0) << floor(n);
 
    return 0;
}