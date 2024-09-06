// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, neg=0;
    cin >> n;
    int A[n], B[n];
    for (int i=0; i<n; i++) {
        cin >> A[i];
        if (A[i] < 0) neg++;
    }
    for (int i=0, j=0, k=0; i<n; i++) {
        if (A[i] < 0) {B[j] = A[i]; j++;}
        else {B[neg+k] = A[i]; k++;}
    }
    for (int i=0; i<n; i++) {
        cout << B[i] << " ";
    }
 
    return 0;
}