// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int n, m, q;
ull A[1005][1005], pref[1005][1005];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> A[i][j];
            pref[i][j] = A[i][j] + pref[i][j-1] + pref[i-1][j] - pref[i-1][j-1];
        }
    }
    while (q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pref[c][d] - pref[c][b-1] - pref[a-1][d] + pref[a-1][b-1] << endl;
    }
    return 0;
}