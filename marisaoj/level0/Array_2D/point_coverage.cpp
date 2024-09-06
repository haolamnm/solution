// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A[102][102];
    memset(A, 0, sizeof(A));
    int n, x1, y1, x2, y2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 > x2) swap(x1, x2);
        if (y1 > y2) swap(y1, y2);
        A[x1-1][y1-1] += 1;
        A[x2][y1-1] -= 1;
        A[x1-1][y2] -= 1;
        A[x2][y2] += 1;
    }
    int cnt = 0;
    for (int i = 0; i < 102; i++) {
        for (int j = 0; j < 102; j++) {
            if (i > 0) A[i][j] += A[i-1][j];
            if (j > 0) A[i][j] += A[i][j-1];
            if (i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
            if (A[i][j] >= 1) cnt++;
        }
    }
    cout << cnt;

    return 0;
}