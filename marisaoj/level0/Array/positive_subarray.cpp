// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int ans=0;
    vector<int> A, B;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    for (int i=0; i<n; i++) {
        if (A[i] > 0) {
            ans++;
        } else if (A[i] <= 0 && ans != 0) {
            B.push_back(ans);
            ans=0;
        }
    }
    if (ans != 0) B.push_back(ans);
    if (B.empty()) {
        cout << 0;
    } else cout << *max_element(B.begin(), B.end());
    
    return 0;
}