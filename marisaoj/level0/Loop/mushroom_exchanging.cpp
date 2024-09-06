// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin >> n >> k;
    int d = n;
    while (n >= k) { 
        d += n/k;
        n = n/k + n%k;
    }
    cout << d;
 
    return 0;
}