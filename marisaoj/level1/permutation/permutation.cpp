// haolamnm

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << endl;
}
void backtrack(int n, vector<int> &sol, vector<bool> &used) {
    if (sol.size() == n) {
        print(sol);
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            sol.push_back(i);
            backtrack(n, sol, used);
            used[i] = false;
            sol.pop_back();
        }
    }
}
int n;
vector<bool> used;
vector<int> sol;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    used.resize(n+1, false);
    backtrack(n, sol, used);

    return 0;
}