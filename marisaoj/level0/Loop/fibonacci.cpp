// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    unsigned long long int F[n+1];
    F[0] = 0;
    F[1] = 1;
    for (int i=2; i<n+1; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    cout << F[n];
 
    return 0;
}