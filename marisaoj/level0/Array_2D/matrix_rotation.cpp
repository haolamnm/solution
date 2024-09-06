// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;

unsigned int n;
vector<vector<int>> matrix;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    matrix.resize(n, vector<int>(n));
    for (int j = n-1; j >= 0; j--) {
        for (int i = 0; i < n; i++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}