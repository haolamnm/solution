// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, k, d; cin >> a >> b >> k;
    vector<int> D;
    if (a >= b) a %= b;
    for (int i=0; i<k; i++) {
        a *= 10;
        d = a / b;
        D.push_back(d);
        a %= b;
    }
    cout << D[k-1];
 
    return 0;
}