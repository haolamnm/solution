// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> A(n+2, vector<int>(m+2, 0));
    while (q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        A[a][b]++;
        A[a][d+1]--;
        A[c+1][b]--;
        A[c+1][d+1]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            A[i][j] += A[i-1][j] + A[i][j-1] - A[i-1][j-1];
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}