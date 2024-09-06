// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned short int n; cin >> n;
    ull A[n][n];
    memset(A, 0, sizeof(A));

    A[0][0] = 1;
    if (n >= 1) {
        for (int i=1; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (j == 0 || j == i) A[i][j] = 1;
                else A[i][j] = A[i-1][j-1] + A[i-1][j];
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (A[i][j] != 0) cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}