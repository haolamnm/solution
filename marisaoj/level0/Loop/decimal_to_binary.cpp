// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    bitset<32> b = bitset<32>(n);
    for (int i=31 - __builtin_clz(n); i>=0; i--) {
        cout << b[i];
    }
 
    return 0;
}