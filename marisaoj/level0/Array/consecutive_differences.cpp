// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int A[n], B[n-1]={0}; 
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<n-1; i++) {
        B[i] = abs(A[i+1]-A[i]);
    }
    cout << *max_element(B, B+(n-1));

    return 0;
}