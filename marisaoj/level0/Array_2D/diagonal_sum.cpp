// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int A[n][m];
    ll sum = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> A[i][j];
        }
    }
    int i=x-1+1, j=y-1+1;
    while (i<n && j<m) {
        sum += A[i][j];
        i++;
        j++;
    }
    i=x-1-1, j=y-1-1;
    while (i>=0 && j>=0) {
        sum += A[i][j];
        i--;
        j--;
    }
    i=x-1-1, j=y-1+1;
    while (i>=0 && j<m) {
        sum += A[i][j];
        i--;
        j++;
    }
    i=x-1+1, j=y-1-1;
    while (i<n && j>=0) {
        sum += A[i][j];
        i++;
        j--;
    }
    sum += A[x-1][y-1];
    cout << sum;

    return 0;
}