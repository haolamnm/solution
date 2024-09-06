// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned short int n, m, x, y;
    cin >> n >> m >> x >> y;
    int A[n][m], B[x][y];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
            cin >> B[i][j];
        }
    }
    int cnt = 0;
    bool found = false;
    for (int i=0; i<n && !found; i++) {
        for (int j=0; j<m && !found; j++) {
            if (B[0][0] == A[i][j] && i+x-1 <= n && j+y-1 <= m) {
                cnt = 0;
                for (int k=0; k<x; k++) {
                    for (int t=0; t<y; t++) {
                        if (B[k][t] == A[i+k][j+t]) {
                            cnt++;
                            if (cnt == x*y) {
                                cout << "YES"; 
                                found = true;
                                break;
                            }
                        } else {
                            cnt=0; 
                            break;
                        }
                    }
                    if (found) break;
                }
            }
        }
    }
    if (!found) cout << "NO";

    return 0;
}