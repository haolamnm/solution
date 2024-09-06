// haolamnm

#include <bits/stdc++.h>
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> B, Q;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        B.push_back(x);
    }
    for (int i=0; i<q*2; i++) {
        int x; cin >> x;
        Q.push_back(x);
    }
    for (int i=q*2-1; i>=1; i-=2) {
        swap(B[Q[i-1]-1], B[Q[i]-1]);
    }
    for (int i=0; i<n; i++) {
        cout << B[i] << " ";
    }
    
    return 0;
}