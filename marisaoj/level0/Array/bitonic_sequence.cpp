// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, gap=0; cin >> n;
    vector<int> A;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    bool s=0;
    for (int i=1; i<n; i++) {
        if (A[i] > A[i-1] && !s) {
            gap++;
        } else if (A[i] < A[i-1]) {
            s=1; gap++;
        } else {
            cout << "NO"; break;
        }
    }
    if (gap == n-1) cout << "YES";
    
    return 0;
}