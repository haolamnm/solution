// haolamnm

#include <bits/stdc++.h>
using namespace std;

int n, m, q, res = 0;
vector<int> A;
vector<tuple<int, int, int>> C;

bool check(vector<int> &A) {
    for (auto &[i, j, k] : C) {
        if (A[i] + A[j] != k) {
            return false;
        }
    }
    return true;
}

void backtrack(int i, vector<int> &A) {
    if (i == n) {
        if (check(A)) {
            res++;
        }
        return;
    }
    for (int val = 1; val <= m; val++) {
        A[i] = val;
        backtrack(i + 1, A);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> q;
    A.resize(n, 0);

    while (q--) {
        int i, j, k;
        cin >> i >> j >> k;
        i--; j--;
        C.emplace_back(i, j, k);
    }

    backtrack(0, A);
    cout << res;
    
    return 0;
}