// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int A[n];
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    sort(A, A+n);
    for (int i=0; i<n; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}