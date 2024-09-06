// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    int A[n];
    for (int i=0; i<n; i++) cin >> A[i];
    if (n % 2 == 0) n-=2; 
    else n-=1;
    for (int i=n; i>=0; i-=2) {
        cout << A[i] << " ";
    }
 
    return 0;
}