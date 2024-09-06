// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
vector<int> A, B;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
        B.push_back(x);
    }
    reverse(B.begin(), B.end());
    
    if (A == B) cout << "YES";
    else cout << "NO";
 
    return 0;
}