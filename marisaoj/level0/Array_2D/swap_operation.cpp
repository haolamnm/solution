// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int n, m, q, t, a, b;
vector<vector<int>> matrix;

void swapRow(int &a, int &b, vector<vector<int>> &matrix) {
    if (a > b) swap(a, b);
    int gap = b - a;
    for (int j = 0; j < m; j++) {
        swap(matrix[a-1][j], matrix[a-1+gap][j]);
    }
}
void swapCol(int &a, int &b, vector<vector<int>> &matrix) {
    if (a > b) swap(a, b);
    int gap = b - a;
    for (int i = 0; i < n; i++) {
        swap(matrix[i][a-1], matrix[i][a-1+gap]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> q;
    matrix.resize(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        if (t == 1 && n > 1) swapRow(a, b, matrix);
        if (t == 2 && m > 1) swapCol(a, b, matrix);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}