// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
vector<int> A;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    for (int i=1; i<=k; i++) {
        A.push_back(A[0]);
        A.erase(A.begin());
    }
    for (int i=0; i<n; i++) {
        cout << A[i] << " ";
    }
 
    return 0;
}