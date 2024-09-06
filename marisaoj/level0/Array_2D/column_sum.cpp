// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
    ll A[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> A[i][j];
        }
    }
    for (int j=0; j<m; j++) {
        for (int i=1; i<n; i++) {
            A[0][j] += A[i][j];
        }
    }
    for (int j=0; j<m; j++) {
        cout << A[0][j] << " ";
    }
    return 0;
}