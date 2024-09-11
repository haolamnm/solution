#include <bits/stdc++.h>
using namespace std;

void backtrack(int &res, int row, const int n, vector<bool> &col, vector<bool> &dsum, vector<bool> &dsub) {
    if (row == n) {
        res++;
        return;
    }
    for (int i = 0; i < n; i++) {
        int u = row + i;               
        int v = row - i + (n - 1);
        if (!col[i] && !dsum[u] && !dsub[v]) {
            col[i] = true;
            dsum[u] = true;
            dsub[v] = true;
            backtrack(res, row + 1, n, col, dsum, dsub);
            col[i] = false;
            dsum[u] = false;
            dsub[v] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n = 0;
    cin >> n;
    int res = 0; 
    vector<bool> col(n, false);
    vector<bool> dsum(2 * n - 1, false); 
    vector<bool> dsub(2 * n - 1, false); 
    
    backtrack(res, 0, n, col, dsum, dsub); 
    
    cout << res;

    return 0;
}