// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> A, B;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        B.push_back(x);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    if (A == B) cout << "YES";
    else cout << "NO";
    
    return 0;
}