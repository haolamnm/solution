// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
void backtrack(vector<vector<int>> &res, vector<int> &num, vector<int> &sol, int n) {
    if (sol.size() == n) {
        res.push_back(sol);
        return;
    }
    for (int i=0; i<num.size(); i++) {
        sol.push_back(num[i]);
        backtrack(res, num, sol, n);
        sol.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    vector<vector<int>> res;
    vector<int> num, sol;
    num = {0,1};
    backtrack(res, num, sol, n);
    
    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<res[i].size(); j++) {
            cout << res[i][j];
        }
        cout << endl;
    }
 
    return 0;
}